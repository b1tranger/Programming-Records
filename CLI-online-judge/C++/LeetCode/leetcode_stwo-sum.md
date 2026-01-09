> for the problem https://leetcode.com/problems/two-sum/description/

<img width="600" height="318" alt="image" src="https://github.com/user-attachments/assets/e22147ef-8645-42e9-828f-001ef0afc826" />

Solution Section with a snippet: <br> <img width="499" height="238" alt="image" src="https://github.com/user-attachments/assets/e973e36e-60d7-4744-8597-ccdb018f327b" />

---

<br>[chatok-jnr](https://github.com/chatok-jnr):


<br>[10:50, 09/01/2026] b1tranger: looks simple
<br>[10:51, 09/01/2026] chatok-jnr: Map diye e to kora jabe i guess
<br>[10:52, 09/01/2026] chatok-jnr: Target - ai

Ei value ki exist kore kina just ota dekhte hobe

So basically sob number er frequency rekhe dibo map er modde
<br>[10:52, 09/01/2026] b1tranger: ami nested loop chinta akortesilam
<br>[10:52, 09/01/2026] chatok-jnr: Pc te bosle implement korbone
<br>[10:52, 09/01/2026] chatok-jnr: 10^8
<br>[10:52, 09/01/2026] b1tranger: breh
<br>[10:53, 09/01/2026] b1tranger: time limit to deynai
<br>[10:53, 09/01/2026] chatok-jnr: Array size 10^4
<br>[10:53, 09/01/2026] chatok-jnr: Tarpor o map diye kora onek fast hobe
<br>[10:53, 09/01/2026] chatok-jnr: N * log(N).   < N^2
<br>[10:53, 09/01/2026] b1tranger: hae, eta maybe alternative ta
<br>[10:54, 09/01/2026] chatok-jnr: Easy category dekhe e 10^4 dise
<br>[10:54, 09/01/2026] chatok-jnr: Ar na hoi 10^5 diye dito
<br>[10:55, 09/01/2026] chatok-jnr: CF: 800
<br>[10:56, 09/01/2026] b1tranger: just right for me
<br>[10:56, 09/01/2026] b1tranger: :3
<br>[10:56, 09/01/2026] chatok-jnr: Map er jaigai kodi 
<br>Gp_hash with custom hashing use kori tahole aro fast hobe


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
            int req = target - nums[i];

            if(mp.find(req) != mp.end()) {
                for(int j = i - 1; j >= 0; j--) {
                    if(nums[j] == req) return {i, j};
                }
            }

            mp[nums[i]]++;
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

<img width="654" height="478" alt="image" src="https://github.com/user-attachments/assets/cef80b50-3fb1-4b83-9a54-5ddaeb8f4840" />

<br>[23:43, 09/01/2026] b1tranger: ekhane return ki necessary? print kore dile hobena?
<br>[00:16, 10/01/2026] chatok-jnr: question poro
oikhane ki bolse
<br>[00:16, 10/01/2026] chatok-jnr: oikhane kintu bolse e return korar jonno
<br>[00:17, 10/01/2026] chatok-jnr: last er line e return korar karon hoitase
ekta function jei type er oi type er value return korte hoi
<br>[00:17, 10/01/2026] chatok-jnr: program kintu asole ei porjonto astase e nah
program if(map == req) oikhan theke e return hoitase
<br>[00:56, 10/01/2026] b1tranger: alright

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //    int sum = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                   ans = {i,j}; 
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums,ans;
    int target;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    Solution obj;
     ans = obj.twoSum(nums, target);
    // for (int i = 0; i < n; i++)
    // {
    //     //        cin >> x;
    //     //        nums.push_back(x);
    //     cout << nums[i] << " ";
    // }

    return 0;
}
```
<br>[02:41, 10/01/2026] b1tranger: nise
<br>[02:41, 10/01/2026] b1tranger: leetcode submission e main ekta hidden thake it seems

<img width="478" height="337" alt="image" src="https://github.com/user-attachments/assets/bf6a0dff-353b-4aad-ab7e-199697a51c51" />

<br><img width="446" height="416" alt="image" src="https://github.com/user-attachments/assets/fa4f91f7-e7fe-4459-8b24-de5adfb9f7bc" />

<br>[02:45, 10/01/2026] b1tranger: ami first e pair<int,int> baniye function call korechilam
<br>[02:46, 10/01/2026] b1tranger: { i , j }  mane ki vector er first 2 ta index?
<br>[02:46, 10/01/2026] chatok-jnr: First 2 ta keno
<br>[02:46, 10/01/2026] chatok-jnr: ith and jth index
<br>[02:47, 10/01/2026] chatok-jnr: i can be any value betwenn 1 to n
<br>[02:47, 10/01/2026] chatok-jnr: So as j
<br>[02:47, 10/01/2026] chatok-jnr: But 
<br>i != j

<img width="187" height="142" alt="image" src="https://github.com/user-attachments/assets/17d05350-c0a4-45c8-b9f0-92a577096227" />

<br>[02:48, 10/01/2026] b1tranger: mane, ami to shebhabe value return korchi

return hoye store hocche kibhabe?
<br>[02:48, 10/01/2026] chatok-jnr: Oita leetcode er bisoy
<br>Ora eta niye kibBe store korbe
<br>[02:49, 10/01/2026] b1tranger: amar code ta dekhen
<br>[02:49, 10/01/2026] chatok-jnr: vector<int> x = twoSum(....)
<br>[02:49, 10/01/2026] b1tranger: amar code e ki hocche sheta ektu bolen
<br>[02:49, 10/01/2026] chatok-jnr: Jehetu tumi vector return kortaso tahole oitake ekta vector a e store korbe
<br>[02:50, 10/01/2026] b1tranger: so, {1,2} return korle ekta empty vector er first 2 ta index e store korbe?
<br>[02:50, 10/01/2026] chatok-jnr: He
<br>[02:50, 10/01/2026] b1tranger: erpor kichu store korte gele, or dhoren, return korlam same vector e

tokhon ki 3rd ar 4th e store korbe naki first 2 ta index overwrite korbe?
<br>[02:50, 10/01/2026] chatok-jnr: Replace hoye jabe
<br>[02:51, 10/01/2026] b1tranger: interesting
<br>[02:51, 10/01/2026] chatok-jnr: vector x ke
<br>Mono koro

int x
<br>[02:51, 10/01/2026] chatok-jnr: Ekhon tumi x er modde joto bar function call korba totbar e to eta change hobe
<br>[02:51, 10/01/2026] chatok-jnr: overwrite

<br>[02:52, 10/01/2026] chatok-jnr: vector<int>x(10),y(5);

x = y

Eta kintu possible 
<br>Ei khetre x hoye jabe y er ekta carbon copy

abr swap(x,y)
<br>Ei Operation o possible
<br>[02:53, 10/01/2026] chatok-jnr: Cause duita e to vector of int
<br>[02:54, 10/01/2026] b1tranger: bracket e to size bujhae, 2ta different size er vector swap korbe kibhabe?

naki vector er size dynamic hoy bole emonta possible?
<br>[02:54, 10/01/2026] chatok-jnr: dynamic bole e possible
<br>[02:55, 10/01/2026] chatok-jnr: Behind the scene ki hoi ta jani nah tobe eta kaj kore
<br>Emon hote pare je
<br>Duitar memory location just swap kore dei behind the scence



