#include <stdio.h>

int main()
{
    int subjectNum, i;
    char Lname[20], Fname[20], Mname[20], subname1[20], subname2[20], subname3[20], subname4[20], subname5[20], subname6[20], subname7[20], subname8[20], subname9[20], subname10[20];
    char subname11[20], subname12[20], subname13[20], subname14[20], subname15[20], subname16[20], subname17[20], subname18[20], subname19[20], subname20[20];
    double submark1, submark2, submark3, submark4, submark5, submark6, submark7, submark8, submark9, submark10, submark11, submark12, submark13, submark14, submark15, submark16, submark17, submark18, submark19, submark20;

    printf("Your Name;\nLastname: ");
    scanf("%s", &Lname);
    printf("Firstname: ");
    scanf("%s", &Fname);
    printf("Middlename: ");
    scanf("%s", &Mname);
    
    printf("\nHow many Subjects are you offering: ");
    scanf("%d", &subjectNum);
    
    if (subjectNum == 1)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the subject:\n");
            scanf("%s", &subname1);
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            double result = submark1 / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 2)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);

            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);

            double sum = submark1 + submark2;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 3)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);

            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);

            double sum = submark1 + submark2 + submark3;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 4)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);

            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);

            double sum = submark1 + submark2 + submark3 + submark4;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 5)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);

            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 6)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);

            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 7)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);

            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 8)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }   
    
    if (subjectNum == 9)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 10)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 11)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 12)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }    
    
    if (subjectNum == 13)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }    
    
    if (subjectNum == 14)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }    
    
    if (subjectNum == 15)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            printf("Enter the 15th Subject:\n");
            scanf("%s", &subname15);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);
            printf("Enter your grade for %s overall 100: ", subname15);
            scanf("%lf", &submark15);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14 + submark15;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }    
    
    if (subjectNum == 16)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            printf("Enter the 15th Subject:\n");
            scanf("%s", &subname15);
            printf("Enter the 16th Subject:\n");
            scanf("%s", &subname16);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);
            printf("Enter your grade for %s overall 100: ", subname15);
            scanf("%lf", &submark15);
            printf("Enter your grade for %s overall 100: ", subname16);
            scanf("%lf", &submark16);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14 + submark15 + submark16;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 17)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            printf("Enter the 15th Subject:\n");
            scanf("%s", &subname15);
            printf("Enter the 16th Subject:\n");
            scanf("%s", &subname16);
            printf("Enter the 17th Subject:\n");
            scanf("%s", &subname17);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);
            printf("Enter your grade for %s overall 100: ", subname15);
            scanf("%lf", &submark15);
            printf("Enter your grade for %s overall 100: ", subname16);
            scanf("%lf", &submark16);
            printf("Enter your grade for %s overall 100: ", subname17);
            scanf("%lf", &submark17);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14 + submark15 + submark16 + submark17;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 18)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            printf("Enter the 15th Subject:\n");
            scanf("%s", &subname15);
            printf("Enter the 16th Subject:\n");
            scanf("%s", &subname16);
            printf("Enter the 17th Subject:\n");
            scanf("%s", &subname17);
            printf("Enter the 18th Subject:\n");
            scanf("%s", &subname18);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);
            printf("Enter your grade for %s overall 100: ", subname15);
            scanf("%lf", &submark15);
            printf("Enter your grade for %s overall 100: ", subname16);
            scanf("%lf", &submark16);
            printf("Enter your grade for %s overall 100: ", subname17);
            scanf("%lf", &submark17);
            printf("Enter your grade for %s overall 100: ", subname18);
            scanf("%lf", &submark18);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14 + submark15 + submark16 + submark17 + submark18;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 19)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            printf("Enter the 15th Subject:\n");
            scanf("%s", &subname15);
            printf("Enter the 16th Subject:\n");
            scanf("%s", &subname16);
            printf("Enter the 17th Subject:\n");
            scanf("%s", &subname17);
            printf("Enter the 18th Subject:\n");
            scanf("%s", &subname18);
            printf("Enter the 19th Subject:\n");
            scanf("%s", &subname19);
            
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);
            printf("Enter your grade for %s overall 100: ", subname15);
            scanf("%lf", &submark15);
            printf("Enter your grade for %s overall 100: ", subname16);
            scanf("%lf", &submark16);
            printf("Enter your grade for %s overall 100: ", subname17);
            scanf("%lf", &submark17);
            printf("Enter your grade for %s overall 100: ", subname18);
            scanf("%lf", &submark18);
            printf("Enter your grade for %s overall 100: ", subname19);
            scanf("%lf", &submark19);

            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14 + submark15 + submark16 + submark17 + submark18 + submark19;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }    
    
    if (subjectNum == 20)
        {
            printf("\nN.B: if your subject happens to have a space between, use '_'\nE.g: For 'Basic science' type 'Basic_science'\nEnter the 1st subject:\n");
            scanf("%s", &subname1);
            printf("Enter the 2nd Subject:\n");
            scanf("%s", &subname2);
            printf("Enter the 3rd Subject:\n");
            scanf("%s", &subname3);
            printf("Enter the 4th Subject:\n");
            scanf("%s", &subname4);
            printf("Enter the 5th Subject:\n");
            scanf("%s", &subname5);
            printf("Enter the 6th Subject:\n");
            scanf("%s", &subname6);
            printf("Enter the 7th Subject:\n");
            scanf("%s", &subname7);
            printf("Enter the 8th Subject:\n");
            scanf("%s", &subname8);
            printf("Enter the 9th Subject:\n");
            scanf("%s", &subname9);
            printf("Enter the 10th Subject:\n");
            scanf("%s", &subname10);
            printf("Enter the 11th Subject:\n");
            scanf("%s", &subname11);
            printf("Enter the 12th Subject:\n");
            scanf("%s", &subname12);
            printf("Enter the 13th Subject:\n");
            scanf("%s", &subname13);
            printf("Enter the 14th Subject:\n");
            scanf("%s", &subname14);
            printf("Enter the 15th Subject:\n");
            scanf("%s", &subname15);
            printf("Enter the 16th Subject:\n");
            scanf("%s", &subname16);
            printf("Enter the 17th Subject:\n");
            scanf("%s", &subname17);
            printf("Enter the 18th Subject:\n");
            scanf("%s", &subname18);
            printf("Enter the 19th Subject:\n");
            scanf("%s", &subname19);
            printf("Enter the 20th Subject:\n");
            scanf("%s", &subname20);
            printf("Enter your grade for %s overall 100: ", subname1);
            scanf("%lf", &submark1);
            printf("Enter your grade for %s overall 100: ", subname2);
            scanf("%lf", &submark2);
            printf("Enter your grade for %s overall 100: ", subname3);
            scanf("%lf", &submark3);
            printf("Enter your grade for %s overall 100: ", subname4);
            scanf("%lf", &submark4);
            printf("Enter your grade for %s overall 100: ", subname5);
            scanf("%lf", &submark5);
            printf("Enter your grade for %s overall 100: ", subname6);
            scanf("%lf", &submark6);
            printf("Enter your grade for %s overall 100: ", subname7);
            scanf("%lf", &submark7);
            printf("Enter your grade for %s overall 100: ", subname8);
            scanf("%lf", &submark8);
            printf("Enter your grade for %s overall 100: ", subname9);
            scanf("%lf", &submark9);
            printf("Enter your grade for %s overall 100: ", subname10);
            scanf("%lf", &submark10);
            printf("Enter your grade for %s overall 100: ", subname11);
            scanf("%lf", &submark11);
            printf("Enter your grade for %s overall 100: ", subname12);
            scanf("%lf", &submark12);
            printf("Enter your grade for %s overall 100: ", subname13);
            scanf("%lf", &submark13);
            printf("Enter your grade for %s overall 100: ", subname14);
            scanf("%lf", &submark14);
            printf("Enter your grade for %s overall 100: ", subname15);
            scanf("%lf", &submark15);
            printf("Enter your grade for %s overall 100: ", subname16);
            scanf("%lf", &submark16);
            printf("Enter your grade for %s overall 100: ", subname17);
            scanf("%lf", &submark17);
            printf("Enter your grade for %s overall 100: ", subname18);
            scanf("%lf", &submark18);
            printf("Enter your grade for %s overall 100: ", subname19);
            scanf("%lf", &submark19);
            printf("Enter your grade for %s overall 100: ", subname20);
            scanf("%lf", &submark20);
            double sum = submark1 + submark2 + submark3 + submark4 + submark5 + submark6 + submark7 + submark8 + submark9 + submark10 + submark11 + submark12 + submark13 + submark14 + submark15 + submark16 + submark17 + submark18 + submark19 + submark20;
            double result = sum / subjectNum;
            printf("Dear %s %s;\nYour average score is: %.2lf", Fname, Mname, result); 
        }
    
    if (subjectNum == 0)
    {
        printf("\nDear %s %s;\nYour average score is: 0", Fname, Mname);
    }

    if (subjectNum > 20)
    {
        printf("\nInvalid input");
    }

    return (0);
}