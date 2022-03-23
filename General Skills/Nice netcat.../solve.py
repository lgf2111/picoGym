from sh import nc

output = nc('-v', 'mercury.picoctf.net', '22342').split('\n')
flag = ''
for n in output:
    try:
        flag += chr(int(n))
    except:
        pass
print(flag)