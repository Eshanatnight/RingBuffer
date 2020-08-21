# Ring Buffer Template Class
<br />

---
## 1. Syntax

Initialization Syntax 
```cpp
    ring<_type> _bufferName_(_size);
```

---

To Get a specific value in the buffer
```cpp
    _bufferName_.get(_position);
```

---

To PushBack Elements
```cpp
    _bufferName_.push_back(_element);
```

---

```cpp
    _bufferName_.push_front(_element);
```

---

Size Function:  *returns size*

```cpp
    _bufferName_.size();
```
<br />


---

## 2. To Be Added:
    - [x] Dereference Operator
    - [x] Increement Operator
    - [ ] Equals Operator
    - [x] Not Equals Operator
    - [ ] Decreement operator
    - [x] Left Bit Shift Operator "<<"
    - [x] Pushback and Pushfront Functions 
            (rmv -add())

<br />