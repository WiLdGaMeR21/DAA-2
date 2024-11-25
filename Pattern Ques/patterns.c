#include <stdio.h>

// 1. Alphabet Square
int alphabet_square() {
    int n = 5;
    char alphabet = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", alphabet);
        }
        printf("\n");
    }
    return 0;
}

// 2. Reverse Pyramid
int reverse_pyramid() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = i; k < (2 * (n - i) - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 3. Number Square
int number_square() {
    int N;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 4. Reverse Alphabet
int reverse_alphabet() {
    char alphabet;
    for (alphabet = 'Z'; alphabet >= 'A'; alphabet--) {
        printf("%c ", alphabet);
    }
    printf("\n");
    return 0;
}

// 5. Pyramid Pattern
int pyramid_pattern() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 6. Decreasing Number Triangle
int decrease_number_triangle() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 7. Number Triangle
int number_triangle() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 8. Diamond Pattern
int diamond() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 9. Alphabet Pyramid
int alphabet_pyramid() {
    int i, j, k;
    char alphabet = 'A';
    for (i = 0; i < 5; i++) {
        for (j = 4; j > i; j--) {
            printf(" ");
        }
        for (k = 0; k <= i; k++) {
            printf("%c ", alphabet + k);
        }
        printf("\n");
    }
    return 0;
}

// 10. Mirror Right Triangle
int mirror_right_triangle() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 11. Empty Pyramid
int empty_pyramid() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            if (i == n - 1 || k == 0 || k == (2 * i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 12. Increasing Numbers Square
int increasing_numbers_square() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// 13. Descending Alphabet Triangle
int descending_alphabet_triangle() {
    char ch = 'E';
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch--);
        }
        printf("\n");
        ch = 'E';
    }
    return 0;
}

// 14. Hollow Square
int hollow_square() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 15. Right Triangle Pattern
int right_triangle() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 16. Left-Justified Numbers
int left_justified_numbers() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 17. Butterfly Pattern
int butterfly_pattern() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 18. Inverted Right Triangle
int inverted_right_triangle() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 19. Hourglass Pattern
int hourglass() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < (n - i); j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < (n - i); j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 20. Zigzag Numbers
int zigzag_numbers() {
    int n = 5, num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}

// 21. Pascal's Triangle
int pascals_triangle() {
    int rows = 5, coef = 1;
    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
    return 0;
}

// 22. Diamond Number Pattern
int diamond_number_pattern() {
    int n = 5, num;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        num = 1;
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("%d", num);
            if (k < i) num++;
            else num--;
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        num = 1;
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("%d", num);
            if (k < i) num++;
            else num--;
        }
        printf("\n");
    }
    return 0;
}

// 24. Pyramid of Numbers
int pyramid_of_numbers() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// 25. Alternating Star Pattern
int alternating_star_pattern() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 26. Diamond of Stars
int diamond_of_stars() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 27. Reverse Pyramid
int reverse_pyramid() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 28. Number Square Pattern
int number_square_pattern() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// 29. Palindrome Pyramid
int palindrome_pyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// 30. Spiral Matrix (Simplified)
int spiral_matrix() {
    int n = 4, val = 1, mat[4][4];
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (val <= n * n) {
        for (int i = left; i <= right; i++) mat[top][i] = val++;
        top++;
        for (int i = top; i <= bottom; i++) mat[i][right] = val++;
        right--;
        for (int i = right; i >= left; i--) mat[bottom][i] = val++;
        bottom--;
        for (int i = bottom; i >= top; i--) mat[i][left] = val++;
        left++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 31. Hollow Pyramid
int hollow_pyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 32. X-Pattern
int x_pattern() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == (n - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 33. Star Triangle with Borders
int star_triangle_with_borders() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
