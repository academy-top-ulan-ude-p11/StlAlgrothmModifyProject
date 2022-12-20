#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class User
{
    string name;
    int age;
public:
    User(string name, int age) : name{ name }, age{ age } {}
    friend ostream& operator<<(ostream& out, const User& u)
    {
        out << "(" << u.name << ") - [" << u.age << "]";
        return out;
    }
    string& Name() { return name; }
    int& Age() { return age; }

    friend bool operator==(const User& u1, const User& u2)
    {
        return u1.name == u2.name;
    }
};

int main()
{
    vector<int> v1{ 4, 5, 2, 9, 3, 1, 7 };
    list<int> l1(10);

    /*for (int item : v1)
        cout << item << " ";
    cout << "\n";
    for (int item : l1)
        cout << item << " ";
    cout << "\n";*/

    /*copy(v1.begin() + 1, v1.begin() + 4, back_inserter(l1));
    for (int item : l1)
        cout << item << " ";
    cout << "\n";*/

    /*copy_if(v1.begin(), v1.end(), back_inserter(l1), [](auto item) {
        return item % 2;
        });*/

    //copy_n(v1.begin() + 1, 4, back_inserter(l1));

    //copy_backward(v1.begin() + 1, v1.end() - 1, --l1.end());

    //move(v1.begin() + 1, v1.begin() + 4, l1.begin());

    //fill(v1.begin() + 2, v1.end() - 2, 0);

    /*transform(v1.begin(), v1.end(), v1.begin(), [](auto item)
        {
            return 2 * item;
        });*/

    /*copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";*/
    
    vector<int> v2(10);
    srand(time(nullptr));
    generate(v2.begin(), v2.end(), []()
        {
            return rand() % 100;
        });
    cout << "\n";
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    //auto it = remove(v2.begin(), v2.end(), 2);
    /*auto it = remove_if(v2.begin(), v2.end(), [](auto item)
        {
            return !(item % 2);
        });*/
    list<int> l2;
    /*auto it = remove_copy_if(v2.begin(), v2.end(),
        back_inserter(l2),
        [](auto item) { return item % 2; });*/

    //reverse(v2.begin() + 2, v2.end() - 3);

    rotate(v2.begin(), v2.begin() + 3, v2.end());

    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    /*copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";*/

}
