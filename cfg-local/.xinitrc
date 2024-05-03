xrdb -load $HOME/.Xresources
$HOME/.dwm-status.sh &
xkbcomp -I$HOME/.xkb $HOME/.xkb/my $DISPLAY
syndaemon -i 1 -d # disable touchpad while typing
compton --backend glx &
[[ -f $HOME/.wallpaper.png ]] && feh --bg-scale $HOME/.wallpaper.png &
exec dwm

