## آزمایش شماره پنج 💡

### گزارش کار و مراحل 📝

در این آزمایش هدف ما نوشتن برنامه ای می باشد که همچون آزمایش قبلی یک ورودی را دریافت کرده و بر اساس آن دستور روشن کردن LED را صادر کند و بلعکس. اما ایندفعه میخواهیم ورودی ما نه یک تک کاراکتر بلکه رشته ای از کاراکترها باشد که بدین منظور باید از نوع داده ای <b>String</b> استفاده کنیم. فرض می کنیم عبارت ورودی ' on ' ، باعث روشن شدن LED و ' OFF ' باعث خاموش شدن آن می شود.

---

### توصیف کد های برنامه 💻

```cpp
const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String inputLed = Serial.readString();  // خواندن یک رشته پشت سر هم از کاراکترها در ورودی سریال مانیتور
    if (inputLed == 'on') {
      digitalWrite(led, HIGH);
    } else if (inputLed == 'off') {
      digitalWrite(led, LOW);
    }
  }
}
```

---

### شماتیک مدار 🗺️

![schematic](/media/schematic_2.jpg)