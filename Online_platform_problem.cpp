// For an input yearN , find whether the year is a leap year or not .

class solution
{
public:
    int isLeap(int N)
    {
        // CODE HERE
        if (N % 400 == 0)
            return 1;

        else if (N % 4 == 0 && N % 100 != 0)
            return 1;
        else
            return 0;
    }
};