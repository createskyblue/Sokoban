@echo off 2>nul 3>nul
title ��ͼ�༭��
mode con cols=50 lines=20
::image�����ڴ�
%1start "" "tools\cmd.exe" "/c %~fs0 :"&exit
color 79
setlocal enabledelayedexpansion
set /p a_bmp=������bmp��
set /p map=������Ҫ�༭�ĵ�ͼ:
if not exist %map%.dat echo.>>%map%.dat
set b_bmp=data\image\%a_bmp%.bmp

set image=load %b_bmp% %a_bmp%
set �Ƕ�=0
::set image=stretch mainbmp 16 16
set x=36
set y=33
set ����id=0
::����ִ��ָ��
set save_load=f
for /f "tokens=* delims= " %%a in (data/boot.dat) do (
%%a
)
for /l %%a in (0,1,255) do (
set ����_%%a=0
)
::0->�հ�
::1->ǽ
::2->��
::3->����
::4->λ��
::5->�ŵ���ȷλ�õ�����
::6->�ڱ�ǩ�ϵ���
::ÿ����ͼ��С16*16 �����������
  
:run
::set image=cls
set image=stretch 10 256 256
set image=10 36 33 trans
::���ض���������ִ��imageָ��
set save_load=f
for /f "tokens=* delims= " %%a in (%map%.dat) do (
%%a
)
set image=%a_bmp% %x% %y% trans
title %map% x: %x% y: %y% id:%����id%
choice /c wsadeqrpo /n >nul

if %errorlevel%==1 (
set /a y-=16
set /a ����id-=16
)
if %errorlevel%==2 (
set /a y+=16
set /a ����id+=16
)
if %errorlevel%==3 (
set /a x-=16
set /a ����id-=1
)
if %errorlevel%==4 (
set /a x+=16
set /a ����id+=1
)
if %errorlevel%==5 (
call :����������
)
if %errorlevel%==7 (
set /p �Ƕ�=��������ת�Ƕȣ�
set image=rotate %a_bmp% %�Ƕ�%
)
if %errorlevel%==6 (
call :reload
)
if %errorlevel%==8 (
call :д�봫���Ų���
)
if %errorlevel%==9 (
call :�����ͼ
)
goto run
:reload
set a_bmp=
set /p a_bmp=������bmp��
set b_bmp=data\image\%a_bmp%.bmp
set image=load %b_bmp% %a_bmp%
Goto :Eof
:����������
set ����_%����id%=%a_bmp%
echo set ����_%����id%=%a_bmp% >>%map%.dat
echo set image=%a_bmp% %x% %y% trans>>%map%.dat


goto :Eof
:д�봫���Ų���
set ��ת������x=0
set ��ת������y=0
set ��ͷ_X=0
set ��ͷ_Y=0
set ��ͷ_id=0
set /p ��ת������x=��ת������x :
set /p ��ת������y=��ת������y :
set /p ��ͷ_X=��ͷ_X :
set /p ��ͷ_Y=��ͷ_Y :
set /p ��ͷ_id=��ͷ_id :
del /f/q "data/map/%map%_%����id%.dat"
echo set ����x= %��ת������x% >>data/map/%map%_%����id%.dat
echo set ����y= %��ת������y% >>data/map/%map%_%����id%.dat
echo set ��ͷ_X= %��ͷ_X% >>data/map/%map%_%����id%.dat
echo set ��ͷ_Y= %��ͷ_Y% >>data/map/%map%_%����id%.dat
echo set ��ͷ_id= %��ͷ_id% >>data/map/%map%_%����id%.dat
echo goto ���뵵��>>data/map/%map%_%����id%.dat
echo ok
goto :Eof
:�����ͼ
if exist "MAP_%map%.dat" del MAP_%map%.dat /s/f/q
for /l %%a in (0,1,255) do (
echo.!����_%%a!,>>MAP_%map%.dat
)
for /f "tokens=*" %%i in (MAP_%map%.dat) do set n=!n! %%i
del MAP_%map%.dat
echo ^/^/LEVEL %map% >>MAP_%map%.dat
echo %n%>>MAP_%map%.dat
start "" MAP_%map%.dat
goto :Eof