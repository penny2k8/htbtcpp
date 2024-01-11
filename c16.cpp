#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    for (int i=100 ; i<547 ; i++)
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
        // num will be 0 only when above loop
        // doesn't get break that means the
        // number is unique so print it.
        if (num == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count;
    return 0;
}

