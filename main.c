// Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Global question no counter
int no = 0;

// Constant values
#define MAX_ASK 5
#define MAX_ANS 2
#define MAX_QUES 32
#define MAX_NAME 100
#define MAX_AGE 10

// Memory to store user option
int table[MAX_QUES];

// Function prototypes
bool check_name(char *string);
bool check_age(char *years);
bool store_value(char *option);
int ie(void);
int sn(void);
int ft(void);
int jp(void);

// Main
int main(int argc, char *argv[])
{
    char name[MAX_NAME];
    char age[MAX_AGE];

    // Copy name, Print name
    printf("WELCOME TO PERSONALITY TEST\n");
    printf("-----------------------------\n");
    // Instructions
    printf("---| INSTRUCTIONS |---\n");
    printf("1.You need to type 1 option only.\n");
    printf("2.You cannot type more than 1 option.\n");
    printf("3.If you type more than 1 option you will be warned.\n");
    printf("4.After warning your game will be closed and you have to restart it again.\n");
    printf("\n");

    do
    {
        printf("Name: ");
        scanf("%s", name);
    }
    while (!check_name(name));

    do
    {
        printf("Age: ");
        scanf("%s", age);
    }
    while (!check_age(age));

    printf("Hi, %s\n", name);

    // Prompt to continue
    char ask[MAX_ASK];
    printf("Do you want to continue? (y/n)");
    scanf("%s", ask);

    if ((strlen(ask)) !=  1)
    {
        printf("Sorry input doesn't match\n");
        printf("Exiting...\n");
        return 1;
    }

    if (ask[0] == 'n')
    {
        printf("Exiting...\n");
        return 0;
    }

    printf("\n");

    // Start quiz
    printf("---| START |--- \n");
    printf("\n");

    // Space to store user option
    char ans[MAX_ANS];

    // Q1
    printf("Question %i: \n How you remember things?\n", no + 1);
    printf("A - MAKES LISTS\nB - RELIES ON MEMORY \nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q2
    printf("Question %i: \n Are you?\n", no + 1);
    printf("A - SCEPTICAL\nB - WANTS TO BELEIVE \nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q3
    printf("Question %i: \n How do you like time to spend?\n", no + 1);
    printf("A - BORED BY TIME ALONE\nB - NEEDS TIME ALONE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q4
    printf("Question %i: \n How do you like things?\n", no + 1);
    printf("A - ACCEPT THINGS AS THEY ARE\nB - UNSATISFIED WITH THE WAYS THINGS ARE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q5
    printf("Question %i: \n About your room?\n", no + 1);
    printf("A - KEEPS A CLEAN ROOM\nB - JUST PUTS STUFF WHERE EVER\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q6
    printf("Question %i: \n Which mind you possesses?\n", no + 1);
    printf("A - THINKS ROBOTIC IS AN INSULT\nB - MECHANICAL MIND\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q7
    printf("Question %i: \n Your Nature?\n", no + 1);
    printf("A - ENERGETIC\nB - MELLOW\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q8
    printf("Question %i: \n Your choosing style?\n", no + 1);
    printf("A - PREFER TO TAKE MULTIPLE CHOICE TEST\nB - PREFER ESSAY ANSWERS\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q9
    printf("Question %i: \n Are you?\n", no + 1);
    printf("A - CHOATIC\nB - ORGANIZED\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q10
    printf("Question %i: \n Are you?\n", no + 1);
    printf("A - EASILY HURT\nB - THICK SKINNED\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        printf("Please Enter Correct Answer.\n");
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q11
    printf("Question %i: \n How best you work?\n", no + 1);
    printf("A - IN GROUPS\nB - ALONE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q12
    printf("Question %i: \n Where you focus?\n", no + 1);
    printf("A - ON PRESENT\nB - ON FUTURE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q13
    printf("Question %i: \n How do you plan?\n", no + 1);
    printf("A - FAR AHEAD\nB - AT THE LAST MINUTE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q14
    printf("Question %i: \n Do you want?\n", no + 1);
    printf("A - PEOPLE'S RESPECT\nB - THEIR LOVE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q15
    printf("Question %i: \n Do you like parties\n", no + 1);
    printf("A - NO\nB - YES\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q16
    printf("Question %i: \n How you behave?\n", no + 1);
    printf("A - FITS IN\nB - STANDS OUT\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q17
    printf("Question %i: \n What you like to do?\n", no + 1);
    printf("A - KEEPS OPTIONS OPEN\nB - COMMITS\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q18
    printf("Question %i: \n How good are you in?\n", no + 1);
    printf("A - FIXING THINGS\nB - FIXING PEOPLE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q19
    printf("Question %i: \n Do you?\n", no + 1);
    printf("A - TALK MORE\nB - LISTEN MORE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q20
    printf("Question %i: \n When you describe events to the people, what you do?\n", no + 1);
    printf("A - TELL PEOPLE WHAT HAPPENED\nB - TELL PEOPLE WHAT IT MEANT\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q21
    printf("Question %i: \n Are you?\n", no + 1);
    printf("A - WORK DONE RIGHT AWAY\nB - PROCRASTINATE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q22
    printf("Question %i: \n Which one you follow?\n", no + 1);
    printf("A - YOUR HEART\nB - YOUR BRAIN\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q23
    printf("Question %i: \n What you like?\n", no + 1);
    printf("A - STAYS AT HOME\nB - GOES OUT THE TOWN\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q24
    printf("Question %i: \n What you want to solve a picture?\n", no + 1);
    printf("A - BIG PICTURE\nB - WANT THE DETAILS\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q25
    printf("Question %i: \n How you do work?\n", no + 1);
    printf("A - START WORK WITHOUT ANY PREPARATION\nB - PREPARE YOURSELF BEFORE STARTING WORK\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q26
    printf("Question %i: \n How you judge on morality?\n", no + 1);
    printf("A - ON JUSTICE\nB - ON COMPARISON\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q27
    printf("Question %i: \n What you find yelling (shouting) at someone?\n", no + 1);
    printf("A - DIFFICULT TO YELL VERY LOUDLY\nB - COMES NATURALLY WHEN SOMEONE IS FAR APART\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q28
    printf("Question %i: \n How you think?\n", no + 1);
    printf("A - THEORETICALLY\nB - PRATICALLY\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q29
    printf("Question %i: \n Which one you like?\n", no + 1);
    printf("A - WORKING HARD\nB - PLAYING HARD\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q30
    printf("Question %i: \n Are you ___ with emotions?\n", no + 1);
    printf("A - UNCOMFORTABLE\nB - COMFORTABLE\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q31
    printf("Question %i: \n Your confidence?\n", no + 1);
    printf("A - LIKE PUBLIC SPEAKING\nB - AVOID PUBLIC SPEAKING\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    // Q32
    printf("Question %i: \n Do you like to know?\n", no + 1);
    printf("A - WHO?, WHAT?, WHEN?\nB - WHY?\nC - fifty-fifty\n");

    // Prompt till correct input
    do
    {
        scanf("%s", ans);
    }
    while (!store_value(ans));

    // Update question no
    no++;

    printf("Your Text file in generated in the source directory.\n");

    // Create New file
    FILE *fp = fopen("TEST.txt", "w");

    // End of program
    fprintf(fp, " ---|BIO DATA |---\n");
    fprintf(fp, "--------------------------\n");
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %s\n\n", age);
    fprintf(fp, "---| PERSONALITY TEST |---\n");
    fprintf(fp, "--------------------------\n");


    // Introvert or Extrovert
    int first_ans = ie();

    if (first_ans > 24)
    {
        fprintf(fp, "You are Extroverted.\n");
    }
    else
    {
        fprintf(fp, "You are introverted.\n");
    }


    // Sensing or Intuitive
    int second_ans = sn();

    if (second_ans > 24)
    {
        fprintf(fp, "You are Intuitive\n");
    }
    else
    {
        fprintf(fp, "You are Sensing.\n");
    }


    // Feeling or Thinking
    int third_ans = ft();

    if (third_ans > 24)
    {
        fprintf(fp, "You are Thinking.\n");
    }
    else
    {
        fprintf(fp, "You are Feeling.\n");
    }


    // Judging or Perceiving
    int fourth_ans = jp();

    if (fourth_ans > 24)
    {
        fprintf(fp, "You are Perceiving.\n");
    }
    else
    {
        fprintf(fp, "You are Judging.\n");
    }

    fprintf(fp, "--------------------------\n");
    fprintf(fp, "---| THANKYOU! |---\n");
    fprintf(fp, "--------------------------\n\n");
    fprintf(fp, "Software Developed By: \n");
    fprintf(fp, "Syed Shehroz Ali\n");

    fclose(fp);
    return 0;

}

// Function to check correct name
bool check_name(char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (isdigit(string[i]))
        {
            return false;
        }
    }

    return true;
}

// Function to check correct age
bool check_age(char *years)
{
    for (int j = 0; j < strlen(years); j++)
    {
        if (!isdigit(years[j]))
        {
            return false;
        }
    }

    return true;
}

// Function to punch answer (if correct)
bool store_value(char *option)
{
    // Is string is NULL
    if (option == NULL)
    {
        printf("No Value...\n");
        return false;
    }

    for (int i = 0; i < strlen(option); i++)
    {
        if (isdigit(option[i]))
        {
            printf("Please Enter Correct Answer.\n");
            return false;
        }
    }

    // Match and store the ans
    if (option[0] == 'A' || option[0] == 'a')
    {
        table[no] = 1;
        return true;
    }

    if (option[0] == 'B' || option[0] == 'b')
    {
        table[no] = 5;
        return true;
    }

    if (option[0] == 'C' || option[0] == 'c')
    {
        table[no] = 3;
        return true;
    }

    printf("Please Enter Correct Answer.\n");
    return false;
}

// Introverted or Extroverted
int ie(void)
{
    int i_e = 30 - table[2] - table[6] - table[10] - table[14] - table[18] - table[22] - table[26] - table[30];
    return i_e;
}

// Sensing or Intuitive
int sn(void)
{
    int s_n = 12 + table[3] + table[7] + table[11] + table[15] + table[19] - table[23] - table[27] + table[31];
    return s_n;
}

// Feeling or thinking
int ft(void)
{
    int f_t = 30 - table[1] + table[5] + table[9] - table[13] - table[17] + table[21] - table[25] - table[29];
    return f_t;
}

// Judging or Perceiving
int jp(void)
{
    int j_p = 18 + table[0] + table[4] - table[8] + table[12] - table[16] + table[20] - table[24] + table[28];
    return j_p;
}
