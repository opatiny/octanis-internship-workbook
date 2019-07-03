# Week 1 - Compact course on linear algebra

## Vectors

- vector: array of numbers -> represents a point in n-dimensional space
- scalar product: changes the length of a vector but not it's direction $k \cdot \vec{a}$
- sum: "chaining" vectors, commutative
- length of a vector with n components: $||\vec{a}|| = \sqrt{\sum_{i=1}^{n} a_i^2}$
- dot product between $\vec{a}$ and $\vec{b}$: $\vec{a} \cdot \vec{b} = \vec{b} \cdot \vec{a} = \sum_{i} a_i b_i$
- linear dependency: a vector is linearly dependent of some others vectors if it can be written as a weighted sum of these vectors

## Matrix

- matrix: table of values
- M: $n \cdot m$ (rows, then columns)
- transpose: rewriting the matrix inverting rows and columns
- matrix vector product: multiplication of a matrix by a vector, is a vector  
  $A \vec{b} = \sum_k \vec{a}_{*k} b_k$
- matrix matrix product: $C = AB = (A \quad \vec{b}_{*1} \quad A \vec{b}_{*2} \quad ... \quad A \vec{b}_{*m})$  
  C is the transformation of B through A
- rank: maximum number of linearly independent rows (or columns): rank(A) = rank (A^T)
- identity matrix (I): zeros everywhere except at the i\_{jj} positions
- inverse ($A^{-1}$): $A \cdot A^{-1} = I$
- determinant
  - only defined for square matrices
  - the inverse of A exists only if $det(A) \neq 0$
