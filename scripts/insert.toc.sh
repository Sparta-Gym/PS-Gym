echo '<!--ts-->\n<!--te-->\n' | sed -i '' '2r/dev/stdin' "$INIT_CWD/README.md" && ~/gh-md-toc --insert --no-backup "$INIT_CWD/README.md"