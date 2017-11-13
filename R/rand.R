#' Random generation for categorical distribution
#'
#' Draw random samples from a categorical distribution given a matrix of probabilities.
#'  \code{rcat} is vetorized and written in C++ for speed.  
#'
#' @param prob A matrix of probabilities where rows correspond to observations 
#' and columns correspond to categories.
#' @name rcat
#' @examples
#' p <- c(.2, .5, .3)
#' n <- 10000
#' pmat <- matrix(rep(p, n), nrow = n, ncol = length(p), byrow = TRUE)
#'
#' # rcat
#' set.seed(100)
#' ptm <- proc.time()
#' samp1 <- rcat(pmat)
#' proc.time() - ptm
#' prop.table(table(samp1))
#'
#' # rmultinom from base R 
#' set.seed(100)
#' ptm <- proc.time()
#' samp2 <- t(apply(pmat, 1, rmultinom, n = 1, size = 1))
#' samp2 <- apply(samp2, 1, function(x) which(x == 1))
#' proc.time() - ptm
#' prop.table(table(samp2))
#' @export
rcat <- function(prob){
  if(!is.matrix(prob)){
    stop("prob must be a matrix")
  }
  return(rcatC(prob) + 1)
}


#' Random generation for piecewise exponential distribution
#'
#' Draw random samples from an exponential distribution with piecewise rates.
#'  \code{rpwexp} is vetorized and written in C++ for speed.  
#'
#' @param rate A matrix of rates where rows correspond to observations 
#' and columns correspond to rates during specified time intervals. 
#' @param time A vector equal to the number of columns in \code{rate} giving the
#' times at which the rate changes
#' @name rpwexp
#' @examples
#' rate <- c(.6, 1.2, 1.3)
#' n <- 100000
#' ratemat <- matrix(rep(rate, n/2), nrow = n, 
#'                   ncol = 3, byrow = TRUE)
#' t <- c(0, 10, 15) 
#' ptm <- proc.time()
#' samp <- rpwexp(ratemat, t)
#' proc.time() - ptm
#' summary(samp)
#' @export
rpwexp <- function(rate, time){
  return(rpwexpC(rate, time))
}

#' Random generation for multiple dirichlet distributions
#'
#' Draw random samples from multiple dirichlet distribution.
#'\code{rdirichlet_mat} is vetorized and written in C++ for speed.  
#'
#' @param n Number of samples to draw.
#' @param alpha A matrix where each row is a separate vector of shape parameters.
#' @name rdirichlet_mat
#' @examples
#' alpha <- matrix(c(100, 200, 500, 50, 70, 75), ncol = 3, nrow = 2, byrow = TRUE)
#' samp <- rdirichlet_mat(100, alpha)
#' print(samp[, , 1:2])
#' @details This function is particularly useful for representing the distribution of 
#' transitions probabilities in a transition matrix.
#' @return An array of matrices representing a sample from the dirichlet distribution for
#' each row.
#' @export
rdirichlet_mat <- function(n, alpha){
  samp <- rdirichlet_matC(n, alpha)
  return(samp)
}