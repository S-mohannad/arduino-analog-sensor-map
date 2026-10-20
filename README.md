# 📡 Analog Sensor Reader with map()

> **Arduino Project #28** — قراءة سنسور تناظري وتحويل نطاق قيمته باستخدام map()

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يقرأ قيمة سنسور تناظري ويحولها إلى نطاق مخصص:

- يقرأ قيمة A0 (0–1023) كل ثانية
- يحولها إلى نطاق (0–150) باستخدام `map()`
- يطبع القيمة المحولة في Serial Monitor

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│            A0 ●─┼──────────┬── سنسور تناظري ── 5V
│                 │          │
│                 │        [10kΩ]
│                 │          │
│           GND ●─┼──────────┘
└─────────────────┘
```

- 🎛️ سنسور تناظري على Pin A0 مع مقاومة سحب 10kΩ إلى GND

---

## 💡 Concepts Used

- `analogRead()` — قراءة قيمة تناظرية (0–1023) من A0
- `map()` — تحويل نطاق القيمة من (0–1023) إلى (0–150)
- `Serial.println()` — طباعة القيمة المحولة كل ثانية
- `delay()` — فترة انتظار ثانية بين كل قراءة

---

## 📊 Behavior

| القيمة الخام (A0) | القيمة بعد map() |
|------------------|-----------------|
| 0 | 0 |
| 511 | ~75 |
| 1023 | 150 |

---

## 🔗 Code

```cpp
int v = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  v = analogRead(A0);
  v = map(v, 0, 1023, 0, 150);
  Serial.println(v);
  delay(1000);
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل سنسور تناظري على pin A0
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. افتح **Serial Monitor** (9600 baud)
8. شاهد القيم المحولة تظهر كل ثانية

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
