## Reparameterize parametric survival distributions for NMA

weibull_to_weibullNMA <- function(shape, scale){
  scalePH <- scale^{-shape}
  a0 <- log(shape * scalePH)
  a1 <- shape - 1
  return(list(a0 = a0, a1 = a1))
}

weibullNMA_to_weibull <- function(a0, a1){
  shape <- a1 + 1
  scalePH <- exp(a0)/shape
  scale <- scalePH^{-1/shape}
  return(list(shape = shape, scale = scale))
}

sr.weibNMA.inits <- function(aux){
    if (aux$counting){
        lt <- log(t[t > 0])
        shape <- 1.64/var(lt)
        scale <- exp(mean(lt) + 0.572)
        pars <- weibull_to_weibullNMA(shape, scale)
        c(pars$a0, pars$a1)
    } else {
        aux$formula <- aux$forms[[1]]
        aux$forms <- NULL
        aux$dist <- "weibull"
        sr <- do.call(survreg, aux)
        sr2fsweiNMA(sr)
    }
}

## Convert parameters of survreg models to flexsurvreg NMA
## parameterisation, for use as initial values 

sr2fsweiNMA <- function(sr){
    scale <- exp(coef(sr)[1])
    beta.scale <- coef(sr)[-1]
    shape <- mean(1/sr$scale)
    beta.shape <- if (length(sr$scale)>1) log(sr$scale[1]/sr$scale[-1]) else numeric()
    pars <- weibull_to_weibullNMA(shape, scale)
    c(pars$a0, pars$a1, -beta.scale*shape, beta.shape)
}

#' Paramaterization of the Weibull distribution for network meta-analysis
#' 
#' Density, distribution function, hazards, quantile function and random generation
#' for the Weibull distribution when parameterized for network meta-analysis.
#' @param x,q Vector of quantiles
#' @param p Vector of probabilities
#' @param n Number of observations. If \code{length(n) > 1}, the length is
#' taken to be the number required.
#' @param a0 Intercept of reparameterization of the Weibull distribution.
#' @param a1 Slope of the reparameterization of the Weibull distribution.
#' @param log,log.p logical; if TRUE, probabilities p are given as log(p).
#' @param lower.tail logical; if TRUE (default), probabilities are \eqn{P(X
#'  \le x)}{P(X <= x)}, otherwise, \eqn{P(X > x)}{P(X > x)}.
#' @param t Vector of times for which restricted mean survival time is evaluated.
#' @param start Optional left-trunctation time or times. The returned restricted
#' mean survival will be conditional on survival up to this time.
#' @param ... Additional arguments to pass to random sampling functions.
#' @name weibullNMA
#' @return \code{dweibullNMA} gives the density, \code{pweibullNMA} gives the
#' distribution function, \code{qweibullNMA} gives the quantile function,
#' \code{rweibullNMA} generates random deviates, \code{HweibullNMA} retuns the
#' cumulative hazard and \code{hweibullNMA} the hazard.
#' @seealso code{\link{dweibull}}
NULL

#' @rdname weibullNMA
#' @export
dweibullNMA <- function(x, a0, a1 = FALSE, log = FALSE) {
  pars <- weibullNMA_to_weibull(a0, a1)
  dweibull(x, shape = pars$shape, scale = pars$scale, log = log)
}

#' @rdname weibullNMA
#' @export
pweibullNMA <- function(q, a0, a1, lower.tail = TRUE, log.p = FALSE) {
  pars <- weibullNMA_to_weibull(a0, a1)
  pweibull(q, shape = pars$shape, scale = pars$scale, 
           lower.tail = lower.tail, log.p = log.p)
}

#' @rdname weibullNMA
#' @export
qweibullNMA <- function(p, a0, a1, lower.tail = TRUE, log.p = FALSE) {
  pars <- weibullNMA_to_weibull(a0, a1)
  qweibull(p, shape = pars$shape, scale = pars$scale, 
           lower.tail = lower.tail, log.p = log.p)
}

#' @rdname weibullNMA
#' @export
rweibullNMA <- function(n, a0, a1) {
  pars <- weibullNMA_to_weibull(a0, a1)
  rweibull(n, shape = pars$shape, scale = pars$scale)
}

#' @rdname weibullNMA
#' @export
hweibullNMA <- function(n, a0, a1, log = FALSE) {
  pars <- weibullNMA_to_weibull(a0, a1)
  flexsurv::hweibull(n, shape = pars$shape, scale = pars$scale, log = log)
}

#' @rdname weibullNMA
#' @export
HweibullNMA <- function(n, a0, a1, log = FALSE) {
  pars <- weibullNMA_to_weibull(a0, a1)
  flexsurv::Hweibull(n, shape = pars$shape, scale = pars$scale, log = log)
}

#' @rdname weibullNMA
#' @export
rmst_weibullNMA = function(t, a0, a1, start = 0){
  rmst_generic(pweibullNMA, t, start = start, a0 = a0, a1 = a1)
}

#' @rdname weibullNMA
#' @export
mean_weibullNMA = function(a0, a1){
  pars <- weibullNMA_to_weibull(a0, a1)
  mean_weibull(shape = pars$shape, scale = pars$scale)
}

#' List of survival distributions
#'
#' List of additional distributions for parametric survival analysis that are 
#' not contained in \link{flexsurv}. Can be used to fit models with 
#' \link{flexsurvreg}. Same format as \link{flexsurv.dists} in \link{flexsurv}.
#'
#' @format A list with the following elements:
#' \describe{
#'   \item{name}{Name of the probability distribution.}
#'   \item{pars}{Vector of strings naming the parameters of the distribution. 
#'   These must be the same names as the arguments of the density and probability functions.}
#'   \item{location}{Name of the location parameter.}
#'   \item{transforms}{List of R functions which transform the range of values 
#'   taken by each parameter onto the real line. For example, 
#'   \code{c(log, log)} for a distribution with two positive parameters.}
#'   \item{inv.transforms}{List of R functions defining the corresponding inverse 
#'   transformations. Note these must be lists, even for single parameter 
#'   distributions they should be supplied as, e.g. \code{c(exp) or list(exp)}.}
#'   \item{inits}{A function of the observed survival times \code{t} (including 
#'   right-censoring times, and using the halfway point for interval-censored times) 
#'   which returns a vector of reasonable initial values for maximum likelihood 
#'   estimation of each parameter. For example, \code{function(t){ c(1, mean(t)) }}
#'    will always initialize the first of two parameters at 1, and the second 
#'    (a scale parameter, for instance) at the mean of \code{t}.}
#' }
##' @export
hesim.survdists <- list(
  weibullNMA = list(
             name = "weibullNMA",
             pars = c("a0", "a1"),
             location = "a0",
             transforms = c(identity, log),
             inv.transforms = c(identity, exp),
             inits = sr.weibNMA.inits
  )
  
)