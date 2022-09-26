iint main(void)
{
        int i;
        int n;
        char password[32];

        n = 15; 

        srand(time(NULL));

        for (i = 0; i < n; i++)
        {
                password[i] += 33 + (rand() % 94);
        }

	password[n] = '\0';

        printf("%s\n", password);

        return (0);
}
   
