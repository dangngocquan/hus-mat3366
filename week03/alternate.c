int turn = 0;
int accountBalance = 5;

// Tiến trình rút tiền
A() {
    while (1) {
        nonCriticalSectionA1();
        // Nhập mã PIN
        // Kiểm tra mã PIN
        // Nhập số tiền rút: amount = 3
        while (turn != 0);
        criticalSectionA();
        // int temp = accountBalance;
        // temp = temp - amount;
        // accountBalance = temp;
        turn = 1;
        nonCriticalSectionA2();
        // Xì tiền từ cây ATM
        // In biên lai
    }
}

// Tiến trình gửi tiền
B() {
    while (1) {
        nonCriticalSectionB1();
        // Nhập mã PIN
        // Kiểm tra mã PIN
        // Nhập số tiền gửi: amount = 2
        while (turn != 1);
        criticalSectionB();
        // int temp = accountBalance;
        // temp = temp + amount;
        // accountBalance = temp;
        turn = 0;
        nonCriticalSectionB2();
        // In biên lai
    }
}

