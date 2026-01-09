> for the problem https://leetcode.com/problems/two-sum/description/

<img width="600" height="318" alt="image" src="https://github.com/user-attachments/assets/e22147ef-8645-42e9-828f-001ef0afc826" />

Solution Section with a snippet: <br> <img width="499" height="238" alt="image" src="https://github.com/user-attachments/assets/e973e36e-60d7-4744-8597-ccdb018f327b" />

---

<br>[chatok-jnr](https://github.com/chatok-jnr):


<br>[10:59, 09/01/2026] b1tranger: wait, ekhane ami array er size nicchina keno
<br>[11:00, 09/01/2026] chatok-jnr: Ora tomake to inout newqr kono option dobe nah
<br>[11:02, 09/01/2026] b1tranger: ??
<br>[11:02, 09/01/2026] b1tranger: tahole kon array er upor kaj korbo?
<br>[11:03, 09/01/2026] chatok-jnr: Ekta function dibe tomake
<br>[11:03, 09/01/2026] chatok-jnr: Oi function er modde array already pass kora thakbe
<br>[11:03, 09/01/2026] chatok-jnr: Tumi oi function complete kore return korbe

<img width="350" height="1200" alt="image" src="https://github.com/user-attachments/assets/48b40d9a-0f89-4da5-b8a6-1fac215fc1a4" />

Dekho eita kintu main function nah <br> <img width="400" height="208" alt="image" src="https://github.com/user-attachments/assets/735a9fc0-c83f-4fdb-9dfb-5125aa453b68" />

<br>[11:04, 09/01/2026] b1tranger: amake code er main part submit korte hobe
<br>[11:05, 09/01/2026] b1tranger: ami to snippet ta clear kore notun kore kortesilam class er baire
<br>[11:05, 09/01/2026] chatok-jnr: Tumi ei function complete kore
Answer return korbe
<br>[11:05, 09/01/2026] chatok-jnr: Function type dekhso
<br>[11:05, 09/01/2026] chatok-jnr: ?
<br>[11:05, 09/01/2026] chatok-jnr: vector
<br>[11:05, 09/01/2026] chatok-jnr: So basically tumi ekta vector er modde answer store kore oi vector return korbe

<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/6672d656-75aa-4f21-b472-ae32f7810fa3" />

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int req = target - nums<br>[i];

            if(mp.find(req) != mp.end()) {
                for(int j = i - 1; j >= 0; j--) {
                    if(nums<br>[j] == req) return {i, j};
                }
            }

            mp<br>[nums<br>[i]]++;
        }
        return {0, 0};
    }
};
```
congratulations brother
you jave started your journey in Leetcode, if I am not wrong

<br>[19:35, 09/01/2026] b1tranger: I have a general visualization in mind, just need to put it in action
<br>[19:35, 09/01/2026] chatok-jnr: visualization
<br>[19:35, 09/01/2026] chatok-jnr: ei jinish ta onek important
<br>[19:35, 09/01/2026] b1tranger: yes
<br>[19:36, 09/01/2026] b1tranger: All Hail Anik sir
<br>[19:36, 09/01/2026] chatok-jnr: kono ekta jinish visualization korte para mani e ami jinish ta feel korte partasi
<br>[19:36, 09/01/2026] b1tranger: DSA 2 te ar kichu na shikhleo eta shikhsi



