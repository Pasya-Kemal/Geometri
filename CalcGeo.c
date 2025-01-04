#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define PI 3.14

typedef struct {
    char name[50];
    int score;
} PlayerScore;

void display2DShapes() {
    printf("1. Circle\n");
    printf("2. Semicircle\n");
    printf("3. Oval\n");
    printf("4. Triangle\n");
    printf("5. Square\n");
    printf("6. Rectangle\n");
    printf("7. Parallelogram\n");
    printf("8. Rhombus\n");
    printf("9. Trapezium\n");
    printf("10. Kite\n");
    printf("11. Pentagon\n");
    printf("12. Hexagon\n");
    printf("13. Heptagon\n");
    printf("14. Octagon\n");
    printf("15. Nonagon\n");
    printf("16. Decagon\n");
    printf("0. Cancel\n");
}

void display3DShapes() {
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Cone\n");
    printf("4. Cylinder\n");
    printf("5. Sphere\n");
    printf("0. Cancel\n");
}

void saveScore(PlayerScore player) {
    FILE *file = fopen("leaderboard.txt", "a");
    if (file != NULL) {
        fprintf(file, "%s %d\n", player.name, player.score);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
    }
}

void displayLeaderboard() {
    FILE *file = fopen("leaderboard.txt", "r");
    if (file != NULL) {
        char name[50];
        int score;
        printf("\n===== LEADERBOARD =====\n");
        while (fscanf(file, "%s %d", name, &score) != EOF) {
            printf("%s: %d\n", name, score);
        }
        fclose(file);
    } else {
        printf("Error opening file for reading.\n");
    }
    
}

void clearLeaderboard() {
    FILE *file = fopen("leaderboard.txt", "w"); 
    if (file != NULL) {
        fclose(file); 
        printf("Leaderboard cleared successfully.\n");
    } else {
        printf("Error opening file for clearing.\n");
    }
}

void MathGame() {
    double score = 0;
    int numQuestions = 10;
    double a, b, c, answer, userAnswer;
    double areaAnswer, userAreaAnswer;
    char operator;
    PlayerScore player;

    printf("Enter your name: ");
    scanf("%s", player.name);

    srand(time(NULL));

    for (int i = 0; i < numQuestions; i++) {
        int questionType = rand() % 2;

        if (questionType == 0) {
            // Arithmetic question
            a = (rand() % 10 + 1) * 1.0;
            b = (rand() % 10 + 1) * 1.0;
            int operation = rand() % 4;

            switch (operation) {
                case 0:
                    operator = '+';
                    answer = a + b;
                    break;
                case 1:
                    operator = '-';
                    answer = a - b;
                    break;
                case 2:
                    operator = '*';
                    answer = a * b;
                    break;
                case 3:
                    operator = '/';
                    answer = a / b;
                    break;
            }

            printf("Question %d: %.2f %c %.2f = ?\n", i + 1, a, operator, b);
            printf("Your answer: ");
            scanf("%lf", &userAnswer);

            if (fabs(userAnswer - answer) < 0.01) { //fabs buat return value positive 
                printf("Correct!\n");
                score++;
            } else {
                printf("Wrong! The correct answer is %.2f.\n", answer);
            }
        } else {
            int shapeType = rand() % 2;

            if (shapeType == 0) {
                int shape = rand() % 8;

                switch (shape) {
                    case 0: // Circle
                        a = (rand() % 10 + 1) * 1.0;
                        areaAnswer = PI * pow(a, 2);
                        printf("Question %d: What is the area of a circle with radius %.2f cm?\n", i + 1, a);
                        break;
                    case 1: // Rectangle
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        areaAnswer = a * b;
                        printf("Question %d: What is the area of a rectangle with length %.2f cm and width %.2f cm?\n", i + 1, a, b);
                        break;
                    case 2: // Triangle
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        areaAnswer = 0.5 * a * b;
                        printf("Question %d: What is the area of a triangle with base %.2f cm and height %.2f cm?\n", i + 1, a, b);
                        break;
                    case 3: // Pentagon
                        a = (rand() % 10 + 1) * 1.0;
                        areaAnswer = (1.0 / 4.0) * sqrt(5 + (5 + 2 * sqrt(5)) * pow(a, 2));
                        printf("Question %d: What is the area of a pentagon with side %.2f cm?\n", i + 1, a);
                        break;
                    case 4: // Decagon
                        a = (rand() % 10 + 1) * 1.0;
                        areaAnswer = (5 * pow(a, 2.0) / 2) * sqrt(5 + 2 * sqrt(5));
                        printf("Question %d: What is the area of a decagon with side %.2f cm?\n", i + 1, a);
                        break;
                    case 5: // Kite
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        areaAnswer = 0.5 * a * b;
                        printf("Question %d: What is the area of a kite with diagonals %.2f cm and %.2f cm?\n", i + 1, a, b);
                        break;
                    case 6: // Parallelogram
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        areaAnswer = a * b;
                        printf("Question %d: What is the area of a parallelogram with base %.2f cm and height %.2f cm?\n", i + 1, a, b);
                        break;
                    case 7: // Heptagon
                        a = (rand() % 10 + 1) * 1.0;
                        areaAnswer = (7.0 / 4.0) * pow(a, 2.0) / tan(PI / 7.0);
                        printf("Question %d: What is the area of a heptagon with side %.2f cm?\n", i + 1, a);
                        break;
                }
            } else {
                int shape = rand() % 5;

                switch (shape) {
                    case 0: // Cube
                        a = (rand() % 10 + 1) * 1.0;
                        areaAnswer = 6 * pow(a, 2);
                        printf("Question %d: What is the surface area of a cube with side %.2f cm?\n", i + 1, a);
                        break;
                    case 1: // Cylinder
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        areaAnswer = 2 * PI * a * (a + b);
                        printf("Question %d: What is the surface area of a cylinder with radius %.2f cm and height %.2f cm?\n", i + 1, a, b);
                        break;
                    case 2: // Sphere
                        a = (rand() % 10 + 1) * 1.0;
                        areaAnswer = 4 * PI * pow(a, 2);
                        printf("Question %d: What is the surface area of a sphere with radius %.2f cm?\n", i + 1, a);
                        break;
                    case 3: // Cuboid
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        c = (rand() % 10 + 1) * 1.0;
                        areaAnswer = 2 * (a * b + b * c + c * a);
                        printf("Question %d: What is the surface area of a cuboid with dimensions %.2f cm, %.2f cm, and %.2f cm?\n", i + 1, a, b, c);
                        break;
                    case 4: // Cone
                        a = (rand() % 10 + 1) * 1.0;
                        b = (rand() % 10 + 1) * 1.0;
                        areaAnswer = PI * a * (a + sqrt(pow(a, 2.0) + pow(b, 2.0)));
                        printf("Question %d: What is the surface area of a cone with radius %.2f cm and height %.2f cm?\n", i + 1, a, b);
                        break;
                }
            }

            printf("Your answer: ");
            scanf("%lf", &userAreaAnswer);

            if (fabs(userAreaAnswer - areaAnswer) < 0.01) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Wrong! The correct answer is %.2f.\n", areaAnswer);
            }
        }
    }

    printf("Game over! Your score: %.0f out of %d\n", score, numQuestions);
    player.score = score;
    saveScore(player); // Save the player's score
    displayLeaderboard(); // Display the leaderboard
}



int main() {
    int pilihan1, pilihan2;
    double bil1, bil2, bil3;
    double area;
    char yesno;

    do {
        printf("\n============ AREA OF GEOMETRY CALCULATOR ============\n");
        printf("1. 2D Shape\n");
        printf("2. 3D Shape\n");
        printf("3. Math Game\n");
        printf("4. Clear leaderboard\n");
        printf("5. Exit\n");
        printf("Choose a number: ");
        scanf("%d", &pilihan1);

        switch (pilihan1) {
            case 1:  
                display2DShapes();
                printf("Choose a number: ");
                scanf("%d", &pilihan2);

                switch (pilihan2) {
                    case 1:
                        printf("Enter the radius (in cm): ");
                        scanf("%lf", &bil1);
                        area = PI * pow(bil1, 2.0);
                        printf("The area of the circle is %.2f cm²\n", area);
                        break;

                    case 2:
                        printf("Enter the radius (in cm): ");
                        scanf("%lf", &bil1);
                        area = 0.5 * PI * pow(bil1, 2.0);
                        printf("The area of the semicircle is %.2f cm²\n", area);
                        break;

                    case 3:
                        printf("Enter the semi-major axis (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter the semi-minor axis (in cm): ");
                        scanf("%lf", &bil2);
                        area = PI * bil1 * bil2;
                        printf("The area of the oval is %.2f cm²\n", area);
                        break;

                    case 4:
                        printf("Enter the base (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter the height (in cm): ");
                        scanf("%lf", &bil2);
                        area = 0.5 * bil1 * bil2;
                        printf("The area of the triangle is %.2f cm²\n", area);
                        break;

                    case 5:
                        printf("Enter the side length (in cm): ");
                        scanf("%lf", &bil1);
                        area = pow(bil1, 2.0);
                        printf("The area of the square is %.2f cm²\n", area);
                        break;

                    case 6:
                        printf("Enter the length (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter the width (in cm): ");
                        scanf("%lf", &bil2);
                        area = bil1 * bil2;
                        printf("The area of the rectangle is %.2f cm²\n", area);
                        break;

                    case 7:
                        printf("Enter the base (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter the height (in cm): ");
                        scanf("%lf", &bil2);
                        area = bil1 * bil2;
                        printf("The area of the parallelogram is %.2f cm²\n", area);
                        break;

                    case 8:
                        printf("Enter diagonal 1 (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter diagonal 2 (in cm): ");
                        scanf("%lf", &bil2);
                        area = 0.5 * bil1 * bil2;
                        printf("The area of the rhombus is %.2f cm²\n", area);
                        break;

                    case 9:
                        printf("Enter base 1 (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter base 2 (in cm): ");
                        scanf("%lf", &bil2);
                        printf("Enter height (in cm): ");
                        scanf("%lf", &bil3);
                        area = 0.5 * (bil1 + bil2) * bil3;
                        printf("The area of the trapezium is %.2f cm²\n", area);
                        break;

                    case 10:
                        printf("Enter diagonal 1 (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter diagonal 2 (in cm): ");
                        scanf("%lf", &bil2);
                        area = 0.5 * bil1 * bil2;
                        printf("The area of the kite is %.2f cm²\n", area);
                        break;

                    case 11:
                        printf("Enter perimeter (in cm): ");
                        scanf("%lf", &bil1);
                        printf("Enter apothem (in cm): ");
                        scanf("%lf", &bil2);
                        area = 0.5 * bil1 * bil2;
                        printf("The area of the pentagon is %.2f cm²\n", area);
                        break;

                    case 12:
                        printf("Enter the side length (in cm): ");
                        scanf("%lf", &bil1);
                        area = (3 * sqrt(3) / 2) * pow(bil1, 2.0);
                        printf("The area of the hexagon is %.2f cm²\n", area);
                        break;

                    case 13:
                        printf("Enter the side length (in cm): ");
                        scanf("%lf", &bil1);
                        area = (7.0 / 4.0) * pow(bil1, 2.0) / tan(PI / 7.0);
                        printf("The area of the heptagon is %.2f cm²\n", area);
                        break;

                    case 14:
                        printf("Enter the side length (in cm): ");
                        scanf("%lf", &bil1);
                        area = 2 * (1 + sqrt(2)) * pow(bil1, 2.0);
                        printf("The area of the octagon is %.2f cm²\n", area);
                        break;

                    case 15:
                        printf("Enter the side length (in cm): ");
                        scanf("%lf", &bil1);
                        area = (9.0 / 4.0) * pow(bil1, 2.0) / tan(PI / 9.0);
                        printf("The area of the nonagon is %.2f cm²\n", area);
                        break;

                    case 16:
                        printf("Enter the side length (in cm): ");
                        scanf("%lf", &bil1);
                        area = (5 * pow(bil1, 2.0) / 2) * sqrt(5 + 2 * sqrt(5));
                        printf("The area of the decagon is %.2f cm²\n", area);
                        break;
                        
                    case 0:
                        printf("Cancelled.\n");
                        break;
                    
                    default:
                        printf("Invalid choice, try again.\n");
                }
                break;

            case 2:  
                display3DShapes();
                printf("Choose a number: ");
                scanf("%d", &pilihan2);
            
            switch(pilihan2){

                case 1:
                printf("Enter the side (in cm) : ");
                scanf("%lf", &bil1);
                area = 6 * bil1 * bil1;
                printf("The area of the cube is %.2f cm²\n", area);
                break;
                
                case 2:
                printf("Enter the length (in cm) : ");
                scanf("%lf", &bil1);
                printf("Enter the width");
                scanf("%lf", &bil2);
                printf("Enter the height");
                scanf("%lf", &bil3);
                area = 2 * (bil1 * bil2 + bil2 * bil3 + bil3 * bil1);
                printf("The area of the cuboid is %.2f cm²\n", area);
                break;
                
                case 3:
                printf("Enter the radius (in cm) : ");
                scanf("%lf", &bil1);
                printf("Enter the height (in cm) : ");
                scanf("%lf", &bil2);
                area = PI * bil1 * (bil1 + sqrt(pow(bil1, 2.0) + pow(bil2, 2.0)));
                printf("The area of cone is %.2lf cm²\n", area);
                break;
                
                case 4:
                printf("Enter the radius (in cm) : ");
                scanf("%lf", &bil1);
                printf("Enter the height (in cm) : ");
                scanf("%lf", &bil2);
                area = (2 * PI * bil1 * bil2) + (2 * PI * bil1 * bil1);
                printf("The area of cylinder is %.2lf cm²\n", area);
                break;
                
                case 5:
                printf("Enter the radius (in cm) : ");
                scanf("%lf", &bil1);
                area = 4 * PI * bil1 * bil1;
                printf("The area of sphere is %.2lf cm²\n", area);
                break;
                        
                case 0:
                printf("Cancelled.\n");
                break;
                
                default:
                printf("Invalid choice, try again.\n");
                break;
            }
            break;

            case 3:  
                MathGame(); 
                break;
            
            case 4: 
                clearLeaderboard(); 
                break;
            	
            case 5: 
			    printf("Exiting the program. Thank you for using our calculator.\n"); 
				return 0;

            default:
                printf("Invalid choice, enter 1, 2, or 3.\n");
        }

        printf("Would you like to continue using our calculator? (Y / N): ");
        scanf(" %c", &yesno);

    } while (yesno == 'Y' || yesno == 'y');

    printf("Thank you for using our calculator.\n");
    return 0;
}
