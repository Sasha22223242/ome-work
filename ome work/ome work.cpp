//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//bool isValidIP(const string& ip) {
//    int num, dots = 0;
//    stringstream ss(ip);
//    string token;
//
//    while (getline(ss, token, '.')) {
//        if (dots++ > 3) return false; 
//        if (!isdigit(token[0])) return false; 
//        num = stoi(token);
//        if (num < 0 || num > 255 || to_string(num) != token) return false; 
//    }
//    return dots == 4; 
//}
//
//int main() {
//    system("chcp 1251>null");
//    string ip;
//
//    cout << "������ IP-������: ";
//    cin >> ip;
//
//    if (isValidIP(ip)) {
//        cout << "�������� IP-������" << endl;
//    }
//    else {
//        cout << "���������� IP-������" << endl;
//    }
//
//    return 0;
//}
// #4
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//    const int count = 5;
//    string surnames[count];
//
//    cout << "������ 5 ������ ��������:" << endl;
//    for (int i = 0; i < count; i++) {
//        cout << "������� " << i + 1 << ": ";
//        cin >> surnames[i];
//    }
//
//    
//
//
//    for (int i = 0; i < count; i++) {
//        for (int j = i + 1; j < count; j++) {
//            if (surnames[i] < surnames[j]) {
//                swap(surnames[i], surnames[j]);
//            }
//        }
//    }
//
//    cout << "\n������� �������� � ������� ��������:" << endl;
//    for (int i = 0; i < count; i++) {
//        cout << surnames[i] << endl;
//    }
//
//    return 0;
//}
// #3
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string replaceSpacesWithTabs(const string& input) {
//    string result;
//    for (char c : input) {
//        if (c == ' ') {
//            result += '\t'; 
//        }
//        else {
//            result += c; 
//        }
//    }
//    return result;
//}
//
//int main() {
//    system("chcp 1251>null");
//    string input;
//
//    cout << "������ ����� �������: ";
//    getline(cin, input);
//
//    string output = replaceSpacesWithTabs(input);
//
//    cout << "\n���������: " << output << endl;
//
//    return 0;
//}
// #4
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//    string input;
//    int letters = 0, digits = 0, others = 0;
//
//    cout << "������ ����� �������: ";
//    getline(cin, input);
//
//    for (int i = 0; i < input.length(); i++) {
//        char c = input[i];
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
//            letters++;
//        }
//        else if (c >= '0' && c <= '9') {
//            digits++;
//        }
//        else {
//            others++;
//        }
//
//        cout << "\nʳ������ ����: " << letters << endl;
//        cout << "ʳ������ ����: " << digits << endl;
//        cout << "ʳ������ ����� �������: " << others << endl;
//
//        return 0;
//    }
//#7
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    system("chcp 1251>null");
//    char letter;
//
//    cout << "������ ����� ����������� ������� (������): ";
//    cin >> letter;
//
//    if (letter == '�') {
//        cout << "��� ���� ����" << endl;
//    }
//    else {
//        if (letter == '�') {
//            cout << "��� ���� ����" << endl;
//        }
//        else {
//            char nextLetter = letter + 1; 
//            cout << "�������� �����: " << nextLetter << endl;
//        }
//    }
//
//    return 0;
//}
