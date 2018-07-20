@echo off 2>nul 3>nul
title 地图编辑器
mode con cols=50 lines=20
::image载入内存
%1start "" "tools\cmd.exe" "/c %~fs0 :"&exit
color 79
setlocal enabledelayedexpansion
set /p a_bmp=请输入bmp：
set /p map=请输入要编辑的地图:
if not exist %map%.dat echo.>>%map%.dat
set b_bmp=data\image\%a_bmp%.bmp

set image=load %b_bmp% %a_bmp%
set 角度=0
::set image=stretch mainbmp 16 16
set x=36
set y=33
set 方块id=0
::批量执行指令
set save_load=f
for /f "tokens=* delims= " %%a in (data/boot.dat) do (
%%a
)
for /l %%a in (0,1,255) do (
set 方块_%%a=0
)
::0->空白
::1->墙
::2->人
::3->箱子
::4->位置
::5->放到正确位置的箱子
::6->在标签上的人
::每个地图大小16*16 可以自行添加
  
:run
::set image=cls
set image=stretch 10 256 256
set image=10 36 33 trans
::加载动画和批量执行image指令
set save_load=f
for /f "tokens=* delims= " %%a in (%map%.dat) do (
%%a
)
set image=%a_bmp% %x% %y% trans
title %map% x: %x% y: %y% id:%方块id%
choice /c wsadeqrpo /n >nul

if %errorlevel%==1 (
set /a y-=16
set /a 方块id-=16
)
if %errorlevel%==2 (
set /a y+=16
set /a 方块id+=16
)
if %errorlevel%==3 (
set /a x-=16
set /a 方块id-=1
)
if %errorlevel%==4 (
set /a x+=16
set /a 方块id+=1
)
if %errorlevel%==5 (
call :制作传送门
)
if %errorlevel%==7 (
set /p 角度=请输入旋转角度：
set image=rotate %a_bmp% %角度%
)
if %errorlevel%==6 (
call :reload
)
if %errorlevel%==8 (
call :写入传送门参数
)
if %errorlevel%==9 (
call :输出地图
)
goto run
:reload
set a_bmp=
set /p a_bmp=请输入bmp：
set b_bmp=data\image\%a_bmp%.bmp
set image=load %b_bmp% %a_bmp%
Goto :Eof
:制作传送门
set 方块_%方块id%=%a_bmp%
echo set 方块_%方块id%=%a_bmp% >>%map%.dat
echo set image=%a_bmp% %x% %y% trans>>%map%.dat


goto :Eof
:写入传送门参数
set 跳转到区块x=0
set 跳转到区块y=0
set 蛇头_X=0
set 蛇头_Y=0
set 蛇头_id=0
set /p 跳转到区块x=跳转到区块x :
set /p 跳转到区块y=跳转到区块y :
set /p 蛇头_X=蛇头_X :
set /p 蛇头_Y=蛇头_Y :
set /p 蛇头_id=蛇头_id :
del /f/q "data/map/%map%_%方块id%.dat"
echo set 区块x= %跳转到区块x% >>data/map/%map%_%方块id%.dat
echo set 区块y= %跳转到区块y% >>data/map/%map%_%方块id%.dat
echo set 蛇头_X= %蛇头_X% >>data/map/%map%_%方块id%.dat
echo set 蛇头_Y= %蛇头_Y% >>data/map/%map%_%方块id%.dat
echo set 蛇头_id= %蛇头_id% >>data/map/%map%_%方块id%.dat
echo goto 载入档案>>data/map/%map%_%方块id%.dat
echo ok
goto :Eof
:输出地图
if exist "MAP_%map%.dat" del MAP_%map%.dat /s/f/q
for /l %%a in (0,1,255) do (
echo.!方块_%%a!,>>MAP_%map%.dat
)
for /f "tokens=*" %%i in (MAP_%map%.dat) do set n=!n! %%i
del MAP_%map%.dat
echo ^/^/LEVEL %map% >>MAP_%map%.dat
echo %n%>>MAP_%map%.dat
start "" MAP_%map%.dat
goto :Eof