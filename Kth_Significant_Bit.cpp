// We are given a number we have to find the Kth significant bit that is it is 0 or 1
#include <iostream>
using namespace std;
// We are using class to better understand the concepts of oops
class KthSignifact
{
private:
    long long n;
    int k;

public:
    KthSignifact()
    {
        cout << "Enter the number to check " << endl;
        cin >> n;
        cout << "Enter the bit to check " << endl;
        cin >> k;
    }
    int first_Solution()
    {
        int count = 0; // To keep check of count of bits
        while (n != 0)
        {
            if (count == k - 1)
            { // Because index start from 0
                if ((n & 1) == 1)
                    return 1;
            }
            count++;
            n >>= 1;
        }
        return 0;
        // Its time complexity is O(logn)
    }
    int second_Solution()
    {
        if (((n >> (k - 1)) & 1) == 1) // We are shifting that bit to the 1 postion and check for on(1) or off(0)
            return 1;
        return 0;
        // Its time complexity is O(1)
    }
};
int main()
{
    KthSignifact *k = new KthSignifact();
    // cout << k->first_Solution() << endl;
    cout << k->second_Solution() << endl;
    return 0;
}