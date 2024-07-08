#include <iostream>
using namespace std;

class Weather {
    public :
        string date;
        string day;
        string sky;

        Weather(string d, string a, string s) {
            date = d;
            day = a;
            sky = s;
        }

        Weather() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Weather weather[100];

    for(int i = 0; i < n; ++i) {
        string a, b, c;
        cin >> a >> b >> c;

        weather[i] = Weather(a, b, c);
    }

    string d = "2100-12-31";
    int index = 0;

    for(int i = 0; i < n; ++i) {
        if(weather[i].sky == "Rain") {
            if(d > weather[i].date) {
                d = weather[i].date;
                index = i;
            }
        }
    }

    cout << weather[index].date << " " << weather[index].day << " " << weather[index].sky << endl;
    return 0;
}