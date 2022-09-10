#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char name[20];
    char sex[10];
    int a1;
    int A,B,C,D,E,F;
    float temp;
    int in;
    printf("Enter your name\n");
    scanf("%s",name);
    printf("How many old are you\n");
    scanf("%d",&a1);
    printf("Enter your sex\n");
    scanf("%s",sex);
    printf("Select  the symptoms you have\n");
    printf(" 1-Dry_Caugh\n2-Loss_OR_dimini's_heal_sense_of_smell\n3-Sore_ThroutD=Weakness\n");
    printf("4-Change_in_Appelite\n5-None_of_these\n");
    scanf("%d",&A);
    if(A<=5)
    {
    if(A==1)
    printf("Dry_Caugh\n");
    else
    if(A==2)
    printf("Loss_OR_dimini's_heal_sense_of_smell\n");
    else
    if(A==3)
    printf("Sore_ThroutD=Weakness\n");
    else
    if(A==4)
    printf("Change_in_Appelite\n");
    else
    if(A==5)
    printf("None_of_these\n");
    else
    printf("Invalid input\n");
    }
    
    printf("Select if you have additional symptoms\n");
    printf(" 1-Moderate_to_severe_cough\n2-Feeling_Breathless\n3-Difficulty_in_Breathing\n");
    printf("4-Prowriness\n5-Persistant_pain_and_pressure_in_chest\n6-severe_weakness\n7-None_of_these\n");
    scanf("%d",&B);
    if(B<=7)
    {
    if(B==1)
    printf("Moderate_to_severe_cough\n");
    else
    if(B==2)
    printf("Feeling_Breathless\n");
    else
    if(B==3)
    printf("Difficulty_in_Breathing\n");
    else
    if(B==4)
    printf("Prowriness\n");
    else
    if(B==5)
    printf("Persistant_pain_and_pressure_in_chest\n");
    else
    if(B==6)
    printf("severe_weakness\n");
    else
    if(B==7)
    printf("None_of_these\n");
    else
    printf("inputnvalid input\n");
    }
    
    
    printf("Select your travel & exposure detalis\n");
    printf("The travel & exposure detalis are 1-No_Travel_History\n");
    printf("2-No_contact_with_any_one_with_symptoms\n");
    printf("3-History_of_travel_OR_meeting_in_offected_geographical_area_in_last_14_days\n");
    printf("4-Close_contact_with_confirmed_COVID_in_last_14_days\n");
    scanf("%d",&C);
    if(C<=4)
    {
    if(C==1)
    printf("No_Travel_History\n");
    else
    if(C==2)
    printf("No_contact_with_any_one_with_symptoms\n");
    else
    if(C==3)
    printf("History_of_travel_OR_meeting_in_offected_geographical_area_in_last_14_days\n");
    else
    if(C==4)
    printf("Close_contact_with_confirmed_COVID_in_last_14_days\n");
    else
    printf("Invalid input\n");
    }
   
    printf("Select if you have a history of any of these\n");
    printf("1-Diabetes\n2-High_blood_preasure(BP)\n3-Heart_disease\n4-Kidney_disease\n");
    printf("5-Lungs_disease\n6-Stoke\n7-Reduced_Immunity\n8-None_of_these\n");
    scanf("%d",&D);
    if(D<=8)
    {
    if(D==1)
    printf("Diabetes\n");
    else
    if(D==2)
    printf("High_blood_preasure(BP)\n");
    else
    if(D==3)
    printf("Heart_disease\n");
    else
    if(D==4)
    printf("Kidney_disease\n");
    else
    if(D==5)
    printf("Lungs_disease\n");
    else
    if(D==6)
    printf("Stoke\n");
    else
    if(D==7)
    printf("Reduced_Immunity\n");
    else
    if(D==8)
    printf("None_of_these\n");
    else
    printf("invalid input\n");
    }
    
    
    printf("How have your symptoms progresser over the last 48hrs?\n");
    printf("1-Improved\n2-No_change\n3-Worsened\n4-Worseneal_consoderably\n");
    scanf("%d",&E);
    if(E<=4)
    {
    if(E==1)
    printf("Improved\n");
    else
    if(E==2)
    printf("No_change\n");
    else
    if(E==3)
    printf("Worsened\n");
    else
    if(E==4)
    printf("Worseneal_consoderably\n");
    else
    printf("Invalid input\n");
    }
    
    
    printf("Stay home & take care of yourself in home isolation\n");
    printf("Prevention and Precaution  [https://www.cdc.gov/coronavirus/2019-ncov/prepare/prevention.html]\n");
    printf("Laboratory test & imagning are optional\n");
    printf("COVID-19 testing may be requried your physicion advise\n");
    printf("Moniter your symptoms and get medical attention if your situation worsines\n");
    printf("---------------------------------------------------\n");
    printf("Your name is=%s\n",name);
    printf("Your age is=%d\n",a1);
    printf("Your gender is=%s\n",sex);
    printf("Your symptoms is/are=%d\n",A);
    printf("Your additional symptoms is/are=%d\n",B);
    printf("Your travel and exposure detalis is/are=%d\n",C);
    printf("Your history symptoms is/are=%d\n",D);
    printf("Your progresser of symptoms is=%d\n",E);
    printf("---------------------------------------------------\n");
}
