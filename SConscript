from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

if GetDepend('PKG_HDC1000_USING_SENSOR_V1'):
    src += ['sensor_ti_hdc1000.c']

# add hdc1000 src files.
src += Glob('libraries/hdc1000_reg.c')

# add Ethernet drivers.
if GetDepend('PKG_USING_HDC1000_EXAMPLE'):
    src += ['sensor_ti_hdc1000_example.c']

# add hdc1000 include path.
path  = [cwd, cwd + '/libraries']

# add src and include to group.
group = DefineGroup('hdc1000', src, depend = ['PKG_USING_HDC1000'], CPPPATH = path)

Return('group')
