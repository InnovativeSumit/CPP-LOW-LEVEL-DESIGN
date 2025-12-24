#include <bits/stdc++.h>
using namespace std;

class company
{
public:
    string name;
    string ceo;
    int revenue;
    string valuation;
    
    string setName(string s)
    {
        name = s;
        return name;
    }

   
    void setRevenue(int x)
    {
        revenue = x;

        if (x < 2)
        {
            cout << "Performance: Loss" << endl;
        }
        else if (x < 6)
        {
            cout << "Performance: Good" << endl;
        }
        else if (x < 10)
        {
            cout << "Performance: Best" << endl;
        }
        else
        {
            cout << "Performance: Excellent" << endl;
        }
    }

    
    int getRevenue()
    {
        return revenue;
    }
};

int main()
{
    company com1;
    cout << "Company name: " << com1.setName("Amazon") << endl;

    com1.setRevenue(23);
    cout << "Revenue: " << com1.getRevenue() << endl;

    com1.setRevenue(3);
    cout << "Revenue: " << com1.getRevenue() << endl;

    com1.setRevenue(5);
    cout << "Revenue: " << com1.getRevenue() << endl;

    return 0;
}
