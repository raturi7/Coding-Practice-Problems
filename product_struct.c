#include<stdio.h>
#include<string.h>

union Product
{
    char product_name[20];
    float price_per_unit;
    int quantity;
};

void main()
{
    union Product p1;
    char tempname[20];
    printf("\nEnter Product Name: ");
    scanf("%[^\n]%*c",p1.product_name);
    strcpy(tempname,p1.product_name);


    printf("Enter Price per Unit: ");
    scanf("%f",&p1.price_per_unit);
    float tempprice=p1.price_per_unit;


    printf("Enter Quantity: ");
    scanf("%d",&p1.quantity);


    printf("\nProduct Name: %s\n",tempname);
    printf("Price per unit: %0.2f\n",tempprice);
    printf("Quantity: %d\n",p1.quantity);
    printf("Total Amount Spent: %0.2f\n\n",tempprice*p1.quantity);
}
