" search
set incsearch
"set highlight 	                                                  " conflict with highlight current line
set ignorecase
set smartcase

" editor settings
set history=1000
set nocompatible
set nofoldenable                                                  " disable folding"
set confirm                                                       " prompt when existing from an unsaved file
set backspace=indent,eol,start                                    " More powerful backspacing
set t_Co=256                                                      " Explicitly tell vim that the terminal has 256 colors "
set mouse=a                                                       " use mouse in all modes
set report=0                                                      " always report number of lines changed                "
set nowrap                                                        " dont wrap lines
set scrolloff=5                                                   " 5 lines above/below cursor when scrolling
set number                                                        " show line numbers
set relativenumber                                                " show relativenumber
set showmatch                                                     " show matching bracket (briefly jump)
set showcmd                                                       " show typed command in status bar
set title                                                         " show file in titlebar
set matchtime=2                                                   " show matching bracket for 0.2 seconds
set directory=~/.vim/tmp                                          " move swp file to /tmp
set backupdir=~/.vim/backup
set undodir=~/.vim/undo

syntax off

set timeoutlen=1000
set ttimeoutlen=5

" Default Indentation
set autoindent
set expandtab       " expand tab to space
set smartindent     " indent when
set tabstop=4       " tab width
set softtabstop=4   " backspace
set shiftwidth=4    " indent width
set textwidth=79
set colorcolumn=+1
" set smarttab      " insert tabs on the start of a line according to shiftwidth, not tabstop
set nohlsearch

autocmd FileType python setlocal tabstop=4 shiftwidth=4 softtabstop=4

set background=dark
colorscheme industry

set noruler
set noshowmode
set noshowcmd
let s:hidden_all=1
set laststatus=0

highlight LineNr ctermfg=grey

