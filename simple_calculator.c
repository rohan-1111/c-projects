#include<stdio.h>
#include<math.h>
void menu_abcd(int coice);
void Sum();
void Sub();
void Mul();
void Div();
void Modulus();
void power();
void menu();

// start code this line
int main(){
    menu(); //call menu function.
}

void menu(){
    while (1){
    int choice;
    printf("\n---------------------------------------------------");
    printf("\nWelcome in simple calculator");
    printf("\n Please choose the following option ");
    printf("\n1.addition\n2. Subtraction\n3. multiplaction\n4. Division\n5. Modulus\n6. power\n7. Exit");
    printf("\nNow , Enter your choice : "); //enter value
    scanf("%d",&choice);
    menu_abcd(choice);  // call menu_abcd.
    if(choice<1 || choice>7){
        printf("Please enter valid number ");
    }if(choice==7){
        break;
    }
    

}
}
void menu_abcd(int choice){
    switch(choice){
        case 1:{ Sum();
        menu();
        break;
        }
        case 2:{ Sub();
        menu();
        break; }
        case 3:{Mul();
        menu();
        break;}
        case 4:{
             Div();
            menu();
            break;}
        case 5:{Modulus();
            break;}
        case 6:{
            power();
            break;}
        case 7: {
            printf("Existing program .....\n");
            break;}
        }
        }
     //sum two number       
void Sum(){
    float num1,num2;
    printf("Enter your number 1 :");
    scanf("%f",&num1);
    printf("Enter your number 2 :");
    scanf("%f",&num2);
    printf("Your answer is %.2f",num1+num2);}

    //Sub two number
    void Sub(){
    float num1,num2;
    printf("Enter yiur number 1: ");
    scanf("%f",&num1);
    printf("Enter your number 2 :");
    scanf("%f",&num2);
    printf("Your answer is %.2f",num1-num2);}

    //Multiply two number
    void Mul(){
    float num1,num2;
    printf("Enter yiur number 1: ");
    scanf("%f",&num1);
    printf("Enter your number 2 :");
    scanf("%f",&num2);
    printf("Your answer  is %.2f",num1*num2);}

    //Divide two number
    void Div(){
    float num1,num2;
    printf("Enter yiur number 1: ");
    scanf("%f",&num1);
    printf("Enter your number 2 :");
    scanf("%f",&num2);
    printf("Your answer is %.2f",num1/num2);}

    //Modulus two number
    void Modulus(){
    int num1,num2;
    printf("Enter yiur number 1: ");
    scanf("%d",&num1);
    printf("Enter your number 2 :");
    scanf("%d",&num2);
    printf("Your answer is %d",num1%num2);}

    
    void power(){
    int  num1,num2;
    printf("Enter yiur number 1: ");
    scanf("%d",&num1);
    printf("Enter your number 2 :");
    scanf("%d",&num2);
    printf("Your answer is %.0f",pow(num1,num2));}