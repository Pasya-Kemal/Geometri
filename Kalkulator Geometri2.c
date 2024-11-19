#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int pilihan1, pilihan2;
    double bil1, bil2, bil3;
    double area;
    char yesno;

    do {
        label1:
        printf("============ AREA OF GEOMETRY CALCULATOR ============\n");
        printf("1. 2D Shape\n");
        printf("2. 3D Shape\n");
        printf("3. Exit\n");
        printf("Choose a number: ");
        scanf("%d", &pilihan1);

        switch (pilihan1) {
            case 1: 
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
                    goto label1;
                    break;

                    default:
                        printf("Invalid choice,try again.\n");
                }
                break;

            case 2:
            printf("1. Cube\n");
            printf("2. Cuboid\n");
            printf("3. Cone\n");
            printf("4. Cylinder\n");
            printf("5. Sphere\n");
            printf("0. Cancel\n");
            printf("Choose a number : ");
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
                goto label1;
                break;
                
                default:
                printf("Invalid choice,try again.\n");
            }
            
            break;

            case 3:
                printf("Exiting the program. Thank you for using our calculator\n");
                break;

            default:
                printf("Invalid choice, enter 1, 2, or 3.\n");
        }
        label2:
        printf("Would you like to try again? (Y / N): ");
        scanf(" %c", &yesno); 
        if(yesno == 'N' || yesno == 'n'){
        	printf("Thank you for using our calculator");
		}
		else if(yesno == 'Y' || yesno == 'y'){
		    goto label1;
		}
		else{
		    printf("Invalid input, please try again\n");
		    goto label2;
		}

    } while (yesno == 'Y' || yesno == 'y');

    return 0;
}

