# Ring Buffer Template Class
<br />

---
## 1. Syntax {WLSS703}
    
    1. Initialization Syntax 
```cpp
    ring<_type> _bufferName_(_size);
```
 
---

    2. To Get a specific value in the buffer
```cpp
    _bufferName_.get(_position);
```

---

    3. To Add Elements
```cpp
    _bufferName_.add(_element);
```

---

    4. Size Function:  *returns size*
```cpp
    _bufferName_.size();
```
<br />


---
## 2. To Be Added: {WLSS102382.}
    - [x] Dereference Operator
    - [x] Increement Operator
        a. * ~~PostFix~~ *
        b. * ~~PreFix~~ *
    - [ ] Equals Operator
    - [x] Not Equals Operator
    - [ ] Decreement operator
        a. * PostFix *
        b. * PreFix *
    - [ ] Left Bit Shift Operator **<<**
    - [ ] Right Bit Shift Operator **>>**