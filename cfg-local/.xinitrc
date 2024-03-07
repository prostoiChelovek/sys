xrdb -load $HOME/.Xresources
$HOME/.dwm-status.sh &
xkbcomp -I$HOME/.xkb $HOME/.xkb/my $DISPLAY
[[ -f $HOME/.wallpaper.png ]] && feh --bg-scale $HOME/.wallpaper.png &
exec dwm

