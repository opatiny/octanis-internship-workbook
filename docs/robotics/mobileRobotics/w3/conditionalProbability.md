# Conditional probability

## Definition 
Probability of an event occurring given that another event has occured (Wikipedia). It is a field of Probability Theory

## Notation

$P(A | B)$ : the probability of A under B (if we know that B has occurred)

A and B must ot have a causal relationship between them -> they can be independent. Then, we have:

$P(A | B) = P(A)$

Where $P(A)$ is the unconditional probability of A.

$P(A, B)$ : Probability of $A$ and $B$ occurring (at the same time?).

There is a link between the two:

$P(A, B) = P(A | B) P(B)$

This can be simplified if the two events are independent, then:

$P(A, B) = P(A) P(B)$

Additionally, in the case of two independent events:

$P(A | B) = P(B | A)$

## Bayes Rule or Bayes' Theorem (Source: Wikipedia)

This theorem describes the probability of an event based on prior knowledge of conditions that might be related to the event. It is stated as follows:

$P(A | B) = \frac{P(B | A) P(A)}{P(B)}$

Where $A$ and $B$ are events and $P(B) \neq 0$.

- $P(A | B)$ is a conditional probability: the likelihood of event $A$ occurring given that $B$ is true.
- $P(B | A)$ is also a conditional probability: the likelihood of event $B$ occurring given that $A$ is true.
- $P(A)$ and $P(B)$ are the probabilities of observing $A$ and $B$ independently of each other; this is known as the marginal probability.
