BADGE="[![CI Linux](https://github.com/${GITHUB_USERNAME}/lab04/actions/workflows/linux.yml/badge.svg)](https://github.com/${GITHUB_USERNAME}/lab04/actions/workflows/linux.yml)"
echo "$BADGE" > tmp_badge.md
cat README.md >> tmp_badge.md
mv tmp_badge.md README.md
