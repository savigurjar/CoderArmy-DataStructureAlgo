<!-- 
 4. If we have only 4 bits, How 3 and-6 will be written in 4 bits. -->


To represent numbers in **4 bits**, we need to understand **binary representation** and especially how **negative numbers** are stored using **Two's Complement** (which is the standard method for signed integers in binary).

---

### ✅ Step 1: Representing Positive Number (3)

* **Decimal 3** in binary (positive number):

  * 3 = `0011` (in 4-bit binary)

---

### ✅ Step 2: Representing Negative Number (-6) in 4-bit using Two's Complement

To get **-6** in 4-bit:

#### Step A: Write +6 in 4-bit binary:

* 6 = `0110`

#### Step B: Take 1’s complement (flip the bits):

* `0110` → `1001`

#### Step C: Add 1:

* `1001` + `1` = `1010`

So,

> 🔹 **-6 in 4-bit two's complement = `1010`**

---

### ✅ Final Answer:

| Decimal | 4-bit Binary |
| ------- | ------------ |
| +3      | `0011`       |
| -6      | `1010`       |



 <!-- 5. If we have only 5 bits, How 13 and-16 will be written in 5 bits. -->

Let’s break it down clearly for **5-bit representation** using **binary and two’s complement**:

---

### ✅ Step 1: Representing Positive Number (13)

Just convert it to binary:

* **13 in binary = `01101`** (fits in 5 bits)

---

### ✅ Step 2: Representing Negative Number (-16) in 5-bit Two’s Complement

#### Step A: Write +16 in binary:

* 16 in binary = `10000`

#### Step B: Take 1’s complement (flip the bits):

* `10000` → `01111`

#### Step C: Add 1:

* `01111` + `00001` = `10000`

Wait — this gives us back `10000`! That’s okay!

> ✅ In 5-bit two’s complement, **-16 is represented as `10000`**

✔ **It’s the lowest possible number you can store in 5-bit two's complement**
(The range for 5-bit signed integers is **−16 to +15**)

---

### ✅ Final Answer:

| Decimal | 5-bit Binary |
| ------- | ------------ |
| +13     | `01101`      |
| −16     | `10000`      |

Let me know if you want to try with 6 or 8 bits!

