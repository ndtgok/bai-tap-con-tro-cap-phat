#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num);
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    if (n <= 2 || n >= 50) {
        cout << "n phai nam trong khoang (2<n<50)" << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    arr.erase(remove_if(arr.begin(), arr.end(), [](int num) {
        return isPrime(sumOfDigits(num));
        }), arr.end());

    cout << "Mang sau khi sap xep va xoa cac phan tu co tong chu so la so nguyen to: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/
/*
int main() {
    char* str = new char[100];
    cout << "Nhap chuoi: ";
    cin.getline(str, 100);

    int sum = 0;
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        if (isdigit(str[i])) {
            sum += str[i] - '0';
        }
    }

    cout << "Tong cac chu so: " << sum << endl;

    // Xoa so trong chuoi
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (!isdigit(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    // Chuan hoa chuoi
    bool newWord = true;
    for (int i = 0; i < j; ++i) {
        if (isalpha(str[i])) {
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = false;
            }
            else {
                str[i] = tolower(str[i]);
            }
        }
        else {
            newWord = true;
        }
    }

    cout << "Chuoi sau khi chuan hoa: " << str << endl;

    delete[] str;
    return 0;
}
*/
/*
bool chuSoTangDan(int num) {
    num = abs(num);
    int chuSoCuoi = 10; // lớn hơn chữ số lớn nhất
    while (num > 0) {
        int chuSoHienTai = num % 10;
        if (chuSoHienTai > chuSoCuoi) return false;
        chuSoCuoi = chuSoHienTai;
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    if (n <= 2 || n >= 50) {
        cout << "n phai nam trong khoang (2<n<50)" << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Cac phan tu co chu so tang dan: ";
    for (int i = 0; i < n; ++i) {
        if (chuSoTangDan(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
*/

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    if (n <= 1 || n > 30) {
        cout << "n phai nam trong khoang (1 < n <= 30)" << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sao chép tất cả các phần tử âm về đầu mảng
    vector<int> mangAm, mangDuong;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            mangAm.push_back(arr[i]);
        }
        else {
            mangDuong.push_back(arr[i]);
        }
    }
    mangAm.insert(mangAm.end(), mangDuong.begin(), mangDuong.end());

    cout << "Mang sau khi sao chep cac phan tu am ve dau: ";
    for (int num : mangAm) {
        cout << num << " ";
    }
    cout << endl;

    // Xóa tất cả các số chẵn khỏi mảng
    vector<int> mangLe;
    for (int i = 0; i < mangAm.size(); ++i) {
        if (mangAm[i] % 2 != 0) {
            mangLe.push_back(mangAm[i]);
        }
    }

    cout << "Mang sau khi xoa cac so chan: ";
    for (int num : mangLe) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
