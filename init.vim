" --- CONFIGS DE BASE POUR CODER EN C ---

" Utiliser des tabulations (vraies tabulations) mais les afficher comme 4 espaces
set tabstop=4       " Taille visuelle d'une tabulation = 4 espaces
set shiftwidth=4    " Indentation automatique = 4 espaces
set noexpandtab     " Utiliser des tabs (et pas des espaces)

" Indentation automatique intelligente
set smartindent     " Indente automatiquement en C
set autoindent      " Reprend l'indentation de la ligne précédente

" Afficher les numéros de ligne
set number

" Meilleure visibilité du curseur
set cursorline

" Activer la coloration syntaxique
syntax on

" Détection automatique du type de fichier et indentation adaptée
filetype plugin indent on

" Quelques bonus pratiques
set showmatch       " Surligner les paires de parenthèses
set incsearch       " Recherche incrémentale (trouve au fur et à mesure)
set ignorecase      " Recherche insensible à la casse...
set smartcase       " ... sauf si majuscule dans la recherche

" Garder quelques lignes visibles au-dessus et en dessous du curseur
set scrolloff=5

" Ne pas faire de backup/swap (optionnel)
set nobackup
set noswapfile

let g:user42 = 'kassassi'
let g:mail42 = 'kassassi@student.42.fr'

" Colorer tous les mots qui commencent par t_ comme des types
augroup HighlightTypedefs
    autocmd!
    autocmd FileType c syntax match cType /\<t_[A-Za-z0-9_]*\>/
augroup END

call plug#begin('~/.local/share/nvim/plugged')

" Arbre de fichiers
Plug 'nvim-tree/nvim-tree.lua'
Plug 'nvim-tree/nvim-web-devicons'  " icônes (optionnel)

" Recherche de fichiers
Plug 'nvim-telescope/telescope.nvim'
Plug 'nvim-lua/plenary.nvim'
Plug 'morhetz/gruvbox'
Plug 'projekt0n/github-nvim-theme'

call plug#end()

" === CONFIG LUA pour nvim-tree ===
lua << EOF
require("nvim-tree").setup()
EOF

" Raccourci F2 pour ouvrir l'arbre
nnoremap <F2> :NvimTreeToggle<CR>

" === Raccourcis Telescope ===
nnoremap <F3> <cmd>Telescope find_files<CR>

syntax enable
set background=dark
colorscheme gruvbox
