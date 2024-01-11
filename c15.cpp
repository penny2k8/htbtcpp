#include<bits/stdc++.h>
using namespace std;
bool isDigitPresent(int x)
{
    // Break loop if d is present as digit
    while (x > 0)
    {
        if (x % 10 == 9)
            break;

        x = x / 10;
    }

    // If loop broke
    return (x > 0);
}
int main()
{
    int count = 0;
    for (int i=10000 ; i<=88888 ; i++)
    {
    int num = i;
        bool visited[10] = {false};

        // Find digits and maintain its hash
        while (num)
        {
            // if a digit occurs more than 1 time
            // then break
            if (visited[num % 10])
                break;

            visited[num%10] = true;

            num = num/10;
        }
    bool digit = isDigitPresent(i);
        // num will be 0 only when above loop
        // doesn't get break that means the
        // number is unique so print it.
        if (i%2==0 && num == 0 && digit == false)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count;
    return 0;
}

