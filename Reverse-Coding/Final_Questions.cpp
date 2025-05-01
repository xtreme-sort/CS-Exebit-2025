#include <bits/stdc++.h>


int64_t q1(std::vector<int64_t>& numbers){
    int64_t ans = 0;

    for(auto& x : numbers){
        ans += __builtin_popcountll(x);
    }

    return ans;
}

int64_t q2(int64_t a, int64_t b, int64_t c, int64_t d){
    int64_t ans = ((a + 1) * (d + 1)) - ((b - 1) * (c - 1));

    return ans;
}

int64_t q3(std::string& str){
    int64_t ans = 0;
    int64_t N = str.length();

    for(int64_t i = 0 ; i < N ; i++){
        if(str[i] <= '9' and str[i] >= '0') ans += (str[i] - '0') * (i + 1);
        else if(str[i] <= 'z' and str[i] >= 'a') ans += (str[i] - 'a' + 1) * (i + 1);
        else if(str[i] <= 'Z' and str[i] >= 'A') ans += (str[i] - 'A' + 1) * (i + 1);
    }

    return ans;
}

int64_t q4(int64_t num){
    int64_t ans = 0;

    while(num != 1){
        if(num & 1) num = 3*num + 1;
        else num /= 2;

        ans++;
    }

    return ans;
}

int64_t q5(int64_t a, int64_t b){
    int64_t ans = (a / std::__gcd(a, b)) * (b / std::__gcd(a, b));

    return ans;
}

int64_t q6(std::string& str){
    std::string copy_str = str;
    std::sort(copy_str.begin(), copy_str.end());
    std::reverse(copy_str.begin(), copy_str.end());

    int N = str.length();
    int64_t ans = 0;

    for(int64_t i = 0 ; i < N ; i++){
        ans += (copy_str[i] != str[i]);
    }

    return ans;   
}

int64_t q7(int64_t num){
    int64_t ans = 0;

    while(num){
        ans += ((num % 3) == 1);
        num /= 3;
    }

    return ans;
}

int64_t q8(std::vector<int64_t>& piles){
    int64_t xor_sum = piles[0];
    int64_t num_piles = piles.size();

    for(int64_t i = 1; i < num_piles; i++){
        xor_sum = xor_sum ^ piles[i];
    }

    if(xor_sum == 0){
        return pow(2, num_piles);
    }
    else{
        return 1;
    }
}


int main(){
    while(true){
        int question_number;
        std::cout << "Please enter the question number: ";
        std::cin >> question_number;
        
        
        if(question_number == 1){
            int64_t n;
            std::cout << "Enter a number between 1-100" << std::endl;
            std::cin >> n;
            if(n == -1) break;
            if(n == 1) std::cout << "Enter " << n << " number between 1-1000000" << std::endl;
            else std::cout << "Enter " << n << " numbers between 1-1000000" << std::endl;
            
            
            std::vector<int64_t> initialnumbers;  
            for(int64_t i = 0 ; i < n ; i++)
            {
                int64_t x;
                std::cin >> x;
                initialnumbers.push_back(x);
            }
            std::cout << q1(initialnumbers) << std::endl;
    
            while(true){
                std::cin >> n;
                if(n == -1) break;
                if(n == 1) std::cout << "Enter " << n << " number between 1-1000000" << std::endl;
                else std::cout << "Enter " << n << " numbers between 1-1000000" << std::endl;
                
                std::vector<int64_t> numbers;  
                for(int64_t i = 0 ; i < n ; i++)
                {
                    int64_t x;
                    std::cin >> x;
                    numbers.push_back(x);
                }
                std::cout << q1(numbers) << std::endl;
                
            }

            if(n == -1) continue;
        }
    
        if(question_number == 2){
            int64_t a, b, c, d;
            std::cout << "Enter a 4 numbers between 1-100000" << std::endl;
            std::cin >> a;
            if(a == -1) break;
            std::cin >> b >> c >> d;  
            
            std::cout << q2(a, b, c, d) << std::endl;
    
            while(true){
                std::cin >> a;
                if(a == -1) break;
                std::cin >> b >> c >> d;   
                
                std::cout << q2(a, b, c, d) << std::endl;
                
            }
            if(a == -1) continue;
        }
    
        if(question_number == 3){
            std::cout << "Enter a string consisting of (a-z)(A-Z)(0-9):" << std::endl;
            std::string str;
            std::cin >> str;
            std::cout << q3(str) << std::endl;
    
            while(true){    
                std::cin >> str;
                if(str == "-1") break;
                std::cout << q3(str) << std::endl;
            }
            if(str == "-1") continue;
        }
    
        if(question_number == 4){
            std::cout << "Enter a number x (1 - 100000): " << std::endl;
            int64_t x;
            std::cin >> x;
            if(x == -1) break;
            std::cout << q4(x) << std::endl;
    
            int64_t num_iter = 1;
            bool flag = true;
    
            while(true){
                if(flag and num_iter == 10){
                    std::cout << "Hint : This is based on a famous sequence named after Mathematician Collatz" << std::endl;
                    flag = false;
                }
                std::cin >> x;
                if(x == -1) break;
                std::cout << q4(x) << std::endl;
        
                num_iter++;
            }
            if(x == -1) continue;
        }
    
        if(question_number == 5){
            int64_t a, b;
            std::cout << "Enter a 2 numbers between 1-100000" << std::endl;
            std::cin >> a;
            if(a == -1) break;
            std::cin >> b;        
            
            std::cout << q5(a, b) << std::endl;
    
            while(true){
                std::cin >> a;
                if(a == -1) break;
                std::cin >> b;    
                
                std::cout << q5(a, b) << std::endl;
                
            }
            if(a == -1) continue;
        }
    
        if(question_number == 6){
            std::cout << "Enter a string consisting of (a-z):" << std::endl;
            std::string str;
            std::cin >> str;
            if(str == "-1") break;
            std::cout << q6(str) << std::endl;
    
            while(true){
                std::cin >> str;
                if(str == "-1") break;
                std::cout << q6(str) << std::endl;
            }
            if(str == "-1") continue;
        }
    
        if(question_number == 7){
            std::cout << "Enter a number x (1 - 100000): " << std::endl;
            int64_t x;
            std::cin >> x;
            if(x == -1) break;
            std::cout << q7(x) << std::endl;
    
            int64_t num_iter = 1;
    
            while(true){
                std::cin >> x;
                if(x == -1) break;
                std::cout << q7(x) << std::endl;
        
                num_iter++;
            }
            if(x == -1) continue;
        }
        
        if(question_number == 8){
            int64_t n;
            std::cout << "Enter a number between 1-10" << std::endl;
            std::cin >> n;
            if(n == -1) break;
            if(n == 1) std::cout << "Enter " << n << " number between 1-100000" << std::endl;
            else std::cout << "Enter " << n << " numbers between 1-100000" << std::endl;
            
            
            std::vector<int64_t> initialnumbers;  
            for(int64_t i = 0 ; i < n ; i++)
            {
                int64_t x;
                std::cin >> x;
                initialnumbers.push_back(x);
            }
            std::cout << q8(initialnumbers) << std::endl;
    
            while(true){
                std::cin >> n;
                if(n == -1) break;
                if(n == 1) std::cout << "Enter " << n << " number between 1-1000000" << std::endl;
                else std::cout << "Enter " << n << " numbers between 1-1000000" << std::endl;
                
                std::vector<int64_t> numbers;  
                for(int64_t i = 0 ; i < n ; i++)
                {
                    int64_t x;
                    std::cin >> x;
                    numbers.push_back(x);
                }
                std::cout << q8(numbers) << std::endl;
                
            }
            if(n == -1) continue;
        }

    }
    return 0;
}