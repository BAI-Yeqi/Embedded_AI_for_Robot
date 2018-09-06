import tkinter as tk

root = tk.Tk()
root.title('NTU-EEE-DIP AI CAR by Yeqi, Yuan, Chang')
root.geometry('900x550')

canvas = tk.Canvas(root,bg='pink',height=200,width=540)
image_path1 = tk.PhotoImage(file='1.png')
image_path2 = tk.PhotoImage(file='tenor.gif')
image1 = canvas.create_image(10,10,anchor='nw',image=image_path1)
image2 = canvas.create_image(293,-30,anchor='nw',image=image_path2)
canvas.pack()

var = tk.StringVar()

l = tk.Label(root,textvariable=var,bg='blue',font=('Arial',22),width=25,height=3)
l.pack(side='bottom')



frm_l =tk.Frame(root)
frm_r =tk.Frame(root)

frm_l.pack(side='left')
frm_r.pack(side='right')
#===================================================================
def hit_me1():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('run forward 1s')

def hit_me2():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('turn left 1s')

def hit_me3():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('turn right 1s')

def hit_me4():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('make a turn 180 degree')

def hit_me5():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('run forward a bit')

def hit_me6():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('turn left a bit')

def hit_me7():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('turn right a bit')

def hit_me8():
    on_hit = False
    if on_hit == False:
        on_hit =True
        var.set('rotate a bit')
    
        
#===================================================================
ll = tk.Label(frm_l,text='discrete control',bg='yellow',font=('Arial',12),width=15,height=3)
ll.pack()

bl1 = tk.Button(frm_l,text='run forward',width=15,height=3,command=hit_me1)
bl1.pack(side='top')

bl2 = tk.Button(frm_l,text='turn left',width=15,height=3,command=hit_me2)
bl2.pack(side='left')

bl3 = tk.Button(frm_l,text='turn right',width=15,height=3,command=hit_me3)
bl3.pack(side='right')

bl4 = tk.Button(frm_l,text='make a turn',width=15,height=3,command=hit_me4)
bl4.pack(side='bottom')
#===================================================================
lr = tk.Label(frm_r,text='continous control',bg='yellow',font=('Arial',12),width=15,height=3)
lr.pack()

br1 = tk.Button(frm_r,text='run forward',width=15,height=3,command=hit_me5)
br1.pack(side='top')

br2 = tk.Button(frm_r,text='turn left',width=15,height=3,command=hit_me6)
br2.pack(side='left')

br3 = tk.Button(frm_r,text='turn right',width=15,height=3,command=hit_me7)
br3.pack(side='right')

br4 = tk.Button(frm_r,text='make a turn',width=15,height=3,command=hit_me8)
br4.pack(side='bottom')
#===================================================================


root.mainloop()
