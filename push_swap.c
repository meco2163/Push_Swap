int main(int argc, char **argv)
{
    int i;

    if (argc <= 1)
    {
        return (0);
    }
    i = 1;
    while (argv[i] != '\0')
    {
        if (isnum(argv[i]) == 0)
        {
            return (0);
        }
        i++;
    }
}