#include<iostream>
#include<vector>
using namespace std;

struct trinumber {
    int num;
    int h_d; // 百位
    int t_d; // 十位
    int s_d; // 个位
    
    // 构造函数，初始化时计算各位数字
    trinumber(int n = 0) : num(n) {
        if (n > 0) {
            h_d = n / 100;
            t_d = (n % 100) / 10;
            s_d = n % 10;
        }
    }
};

bool check(trinumber t, trinumber y, trinumber u) {
    // 检查是否有数字0
    if (t.h_d == 0 || t.t_d == 0 || t.s_d == 0 ||
        y.h_d == 0 || y.t_d == 0 || y.s_d == 0 ||
        u.h_d == 0 || u.t_d == 0 || u.s_d == 0) {
        return false;
    }
    
    // 使用数组记录每个数字出现的次数
    int count[10] = {0};
    count[t.h_d]++; count[t.t_d]++; count[t.s_d]++;
    count[y.h_d]++; count[y.t_d]++; count[y.s_d]++;
    count[u.h_d]++; count[u.t_d]++; count[u.s_d]++;
    
    // 检查1-9是否各出现一次
    for (int i = 1; i <= 9; i++) {
        if (count[i] != 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == 0 || b == 0 || c == 0) {
    cout << "No!!!" << endl;
    return 0;
	}

    bool found = false;
    
    for (int i = 123; i <= 987; i++) {
        // 检查是否能整除，确保是整数
        if ((i * b) % a != 0 || (i * c) % a != 0) {
            continue;
        }
        
        int j = i * b / a; // 第二个数
        int k = i * c / a; // 第三个数
        
        // 检查是否都是三位数
        if (j < 100 || j > 999 || k < 100 || k > 999) {
            continue;
        }
        
        trinumber A(i), B(j), C(k);
        
        if (check(A, B, C)) {
            cout << A.num << " " << B.num << " " << C.num << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "No!!!" << endl;
    }
    
    return 0;
}

