#pragma once

// Определение размера матрицы
#define MATRIX_ROWS 5
#define MATRIX_COLS 7


// Разрешение подтягивающих резисторов на столбцах (полезно для диодной матрицы)
#define DIODE_DIRECTION COL2ROW

// Дополнительные настройки (например, таймаут)
#define DEBOUNCE 5
#define TAPPING_TERM 200


// Ваш уникальный ID производителя и продукта (Vendor ID / Product ID)
#define VENDOR_ID 0xABCD
#define PRODUCT_ID 0x1234
#define MANUFACTURER "Kitnerboyredoubt"
#define PRODUCT "Kitnersplit keyboard"