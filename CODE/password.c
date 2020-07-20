//** Password Strength Checker (Developed by Syed Shahroz Ali) **//

// Libraries
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

// Function header
long long digits(int numbers);
long long lowercase(int lower);
long long uppercase(int upper);
long long symbols(int specialch);

// Main
int main(int argc, char *argv[])
{
    // Check for correct input
    if (argc != 2)
    {
        printf("Usage: ./hack password\n");
        return 1;
    }

    // String type for password
    char *password = argv[1];

    // Calculate length of the string
    int length = strlen(password);

    // Declarations for variables
    int total_digits = 0;
    int total_lowercase = 0;
    int total_uppercase = 0;
    int total_symbols = 0;

    // Loop till '\0' and count each character type
    for (int i = 0; password[i] != '\0'; i++)
    {
        // For digit
        if (isdigit(password[i]))
        {
            total_digits++;
        }
        // For lowercase
        if (islower(password[i]))
        {
            total_lowercase++;
        }
        // For uppercase
        if (isupper(password[i]))
        {
            total_uppercase++;
        }
        // For symbols
        if (isgraph(password[i]) && (!isalpha(password[i])) && (!isdigit(password[i])) && (!isspace(password[i])))
        {
            total_symbols++;
        }
    }

    // Declaration for variables
    long long n = 0;
    long long l = 0;
    long long u = 0;
    long long s = 0;

    // Perform calculations (if not = 0)
    if (total_digits != 0)
    {
        n = digits(total_digits);
    }
    if (total_lowercase != 0)
    {
        l = lowercase(total_lowercase);
    }
    if (total_uppercase != 0)
    {
        u = uppercase(total_uppercase);
    }
    if (total_symbols != 0)
    {
        s = symbols(total_symbols);
    }

    // Counter to check strength of the password
    int counter = 0;

    // Check and count the conditions
    if (length >= 12)
    {
        counter++;
    }
    if (total_lowercase >= 1)
    {
        counter++;
    }
    if (total_uppercase >= 1)
    {
        counter++;
    }
    if (total_digits >= 1)
    {
        counter++;
    }
    if (total_symbols >= 1)
    {
        counter++;
    }

    // String to store strength of the password
    char *strength;

    // Prints the strength of the password
    printf("Strength:  ");
    if (counter == 5)
    {
        strength = "Strong";
        printf("Strong\n");
    }
    if (counter >= 3 && counter < 5)
    {
        strength = "Good";
        printf("Good\n");
    }
    if (counter <= 2)
    {
        strength = "Weak";
        printf("Weak\n");
    }

    // Print to check for .txt file
    printf("Please check the source directory and see the text file for more details.\n");

    // Open file in write mode
    FILE *fp = fopen("password-check.txt", "w");

    // If returns NULL
    if (!fp)
    {
        printf("File could not be created...\n");
        fclose(fp);
        return 1;
    }

    // Start writing to the file
    fprintf(fp, "Developed By Syed Shehroz Ali\n\n");

    // Print password and strength
    fprintf(fp, "Your Password: %s\n", password);
    fprintf(fp, "Strength: %s\n\n", strength);

    // Summary of total possible combinations
    fprintf(fp, "-----| SUMMARY |----- \n");
    fprintf(fp, "Digits %i: %lli\n", total_digits, n);
    fprintf(fp, "Lowercase %i: %lli\n", total_lowercase, l);
    fprintf(fp, "Uppercase %i: %lli\n", total_uppercase, u);
    fprintf(fp, "Special Characters %i: %lli\n", total_symbols, s);

    printf("\n");

    // Serial no counter
    int serialno = 1;

    // Comments/sugestions
    fprintf(fp, "-----| COMMENTS |----- \n");
    if (length < 12)
    {
        fprintf(fp ,"%i.Try adding more characters (12 recommended)\n", serialno);
        serialno++;
    }
    if (total_digits == 0)
    {
        fprintf(fp, "%i.Try adding atleast one digit\n", serialno);
        serialno++;
    }
    if (total_lowercase == 0)
    {
        fprintf(fp, "%i.Try adding atleast one lowercase\n", serialno);
        serialno++;
    }
    if (total_uppercase == 0)
    {
        fprintf(fp, "%i.Try adding atleast one uppercase\n", serialno);
        serialno++;
    }
    if (total_symbols == 0)
    {
        fprintf(fp, "%i.Try adding atleast one special character\n", serialno);
        serialno++;
    }
    if (counter == 5)
    {
        fprintf(fp, "Safe!\n");
    }

    // End the program
    fclose(fp);
    return 0;
}

// Function operations
long long digits(int numbers)
{
    long long res1 = pow(10, numbers);
    return res1;
}

long long lowercase(int lower)
{
    long long res2 = pow(26, lower);
    return res2;
}

long long uppercase(int upper)
{
    long long res3 = pow(26, upper);
    return res3;
}

long long symbols(int specialch)
{
    long long res4 = pow(32, specialch);
    return res4;
}
