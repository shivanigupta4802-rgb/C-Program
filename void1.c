/*Ek user-defined function ho jiska naam study ho (return type void ho aur koi argument na ho).

study function ke andar ek printf message print ho: "Coding padhna asaan hai!".

main function ke andar sabse pehle ek line print ho: "Main function shuru hua.", fir study() function ko call kiya jaye, aur last mein ek line print ho: "Main function khatam hua."*/
#include<stdio.h>
void study(); 
    int main() {
        printf("coding is very easy!\n");
        study();
        printf("main function is starting!\n");
}
void study() {
    printf("main function is end.\n");

}
