# MemoryVirtualization
โปรเจ็คนี้เป็นส่วนหนึ่งของรายวิชา __CPE326 Operating System__ 
### OS is Sah Team
Member in team :desktop_computer:
> * :woman: Ms.Natchariya Wongamnuayporn 61070507204
> * :man: Mr.Natchapol Patamawisut 61070507205
> * :man: Ms.Thanakit Khamsuwan 61070507208
> * :woman: Ms.Rapeepan Masatitsup 61070507218
> * :woman: Ms.Sarunporn Thanakorndisth 61070507234
# Project Description 
:computer: Memory Virtualization คือ การที่ทำให้เเต่ละ process_id หรือ pid ใช้พื้นที่ memory ไปเท่าไหร่ในเเต่ละ zone ของ memory  
ซึ่งจะประกอบด้วย 2 ส่วน ได้เเก่   
* Virtual memory 
* Physical memory

# Installation virtual machine for every OS 
<ol>
    install a virtual machine for window 
    <pre>https://www.virtualbox.org/</pre>
    for MacOS เเละ Linux 
    <pre>สามารถ run ใน 'Ubuntu 20.04' ได้เลย</pre>
</ol>

# Build Kernel for miniproject 1 
เราต้องทำการ run ใน 'Ubuntu terminal' เท่านั้น  

<ol>
  <li>
    สามารถทำการ install the kernel to your machine 
    <pre>https://help.ubuntu.com/community/Kernel/Compile</pre>
    สามารถไปดูใน link เพื่อทำการติดตั้ง kernal บน machine 
    <pre>https://www.youtube.com/watch?v=EpabBljarPM&feature=youtu.be&fbclid=IwAR37GJc3llqCEfwY5Vr1RqX98g0fEhwRDpWhXvbooFPVATOW7OJpizqaOOA</pre>
  </li>
  <li>
    เมื่อโหลดเสร็จสิ้นเเล้ว สามารถทำการดูชื่อที่เราตั้งใหม่ได้  
    :warning: <pre>ก่อนจะโหลดเสร็จ ต้องทำการเปลี่ยนชื่อ kernel ก่อน ถึงจะสามารถใช้คำสั่ง 'uname' ได้</pre>
  </li>
</ol>

# Run code for miniproject 2+3 (Memory virtualization) 
<ol>
  <li>
      clone repository 
      <pre>$ git clone https://github.com/BankNatchapol/MemoryVirtualization.git</pre>
  </li>
  <li>
    Create memory monitoring command for a specific process
    <pre>
    1. Get input as 'process_id' or 'pid' that want to monitor  
    2. Show how much space is used by that process in 'DMA' , 'Normal' and 'HighMem'
    </pre>
  </li>
</ol>  

# Built with 
> * Ubuntu terminal
> * VS code with C language
