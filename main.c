#include <stdio.h>

int main() {

    int houseNum, length, width, numOfTrees;
    char grass[9], blank;
    float purchasePrice();

    printf("Enter House Number: ");
    scanf("%d", &houseNum);
    printf("\n");

    printf("Enter property length (feet): ");
    scanf("%d", &length);
    printf("\n");

    printf("Enter property width (feet): ");
    scanf("%d", &width);
    scanf("%c", &blank);
    printf("\n");

    printf("Enter type of grass (fescue, bentgrass, campus): ");
    fgets(grass, 9, stdin);
    printf("\n");

    printf("Enter the number of trees: ");
    scanf("%d", &numOfTrees);
    printf("\n");

    printf("Total cost for house %d is: $%.2f\n", houseNum);

    return 0;
}

float purchasePrice(int length, int width, char grass[], int numOfTrees){
    int baseLabour = 1000;
    int area = length * width;

    if((length * width) > 5000){
        baseLabour += 500;
    };

    if(grass == "fescue")
}
