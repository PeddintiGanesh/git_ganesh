// 10) Polynomial addition using linked list

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
struct Term
{
    int coefficient;
    int exponent;
    struct Term *next;
};

// Function to create a new term
struct Term *createTerm(int coefficient, int exponent)
{
    struct Term *newTerm = (struct Term *)malloc(sizeof(struct Term));
    if (newTerm == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;

    return newTerm;
}

// Function to insert a term into the polynomial
void insertTerm(struct Term **poly, int coefficient, int exponent)
{
    struct Term *newTerm = createTerm(coefficient, exponent);

    if (*poly == NULL)
    {
        *poly = newTerm;
    }
    else
    {
        struct Term *temp = *poly;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newTerm;
    }
}

// Function to add two polynomials
struct Term *addPolynomials(struct Term *poly1, struct Term *poly2)
{
    struct Term *result = NULL;

    while (poly1 != NULL || poly2 != NULL)
    {
        int coeff1 = (poly1 != NULL) ? poly1->coefficient : 0;
        int coeff2 = (poly2 != NULL) ? poly2->coefficient : 0;
        int exp1 = (poly1 != NULL) ? poly1->exponent : 0;
        int exp2 = (poly2 != NULL) ? poly2->exponent : 0;

        int sumCoeff = coeff1 + coeff2;
        int sumExp = exp1;

        if (exp1 == exp2)
        {
            sumExp = exp1;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (exp1 > exp2)
        {
            sumExp = exp1;
            poly1 = poly1->next;
        }
        else
        {
            sumExp = exp2;
            poly2 = poly2->next;
        }

        insertTerm(&result, sumCoeff, sumExp);
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(struct Term *poly)
{
    while (poly != NULL)
    {
        printf("%dx^%d", poly->coefficient, poly->exponent);
        if (poly->next != NULL)
        {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}

// Function to free memory used by a polynomial
void freePolynomial(struct Term *poly)
{
    struct Term *temp;
    while (poly != NULL)
    {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}

void main()
{
    struct Term *poly1 = NULL;
    struct Term *poly2 = NULL;

    // Insert terms into the first polynomial
    insertTerm(&poly1, 3, 2);
    insertTerm(&poly1, 5, 1);
    insertTerm(&poly1, 2, 0);

    // Insert terms into the second polynomial
    insertTerm(&poly2, 4, 3);
    insertTerm(&poly2, 1, 1);
    insertTerm(&poly2, 7, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Perform polynomial addition
    struct Term *result = addPolynomials(poly1, poly2);

    printf("Result (Sum): ");
    displayPolynomial(result);

    // Free memory used by the polynomials
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(result);
}
