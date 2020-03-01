# 2. Add Two Numbers 
Editor: Kuang(kuang.work@gmail.com)

**This is just a note during my LeetCode pratice**

## Data Structure

### ListNode
```
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
```

## Other Note
During the Calculate Sum procession, integer may <font color=red>overflow</font>.
List Node is suitable for this issue, as it hard to overflow.

