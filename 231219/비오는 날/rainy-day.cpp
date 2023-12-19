#include <iostream>
using namespace std;

class Weather {
    public:
    string week;
    string day;
    string weather;

    Weather(string day, string week, string weather) {
        this->week = week;
        this->day = day;
        this->weather = weather;
    }

    Weather() {}
};

int main() {
    // 여기에 코드를 작성해주세요.
    Weather weather[100];

    int n;
    cin >> n;
    int idx = 0;

    for(int i = 0; i < n; ++i) {
        string a, b, c;
        cin >> a >> b >> c;
        weather[i] = Weather(a, b, c);
        if(c == "Rain") {
            idx = i;
        }
    }


    for(int i = 0; i < n; ++i) {
        if(weather[idx].day > weather[i].day) {
            if(weather[i].weather == "Rain") {
                idx = i;
            }
        }
    }

    cout << weather[idx].day << " " << weather[idx].week << " " << weather[idx].weather << endl;

    return 0;
}