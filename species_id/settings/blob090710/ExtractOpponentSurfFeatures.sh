#!/bin/sh
# Configuration script that will extract some surf features on all the
# blob images

# Configuration options
INPUT_FILES=\"/data/mdesnoye/fish/extractedFish/extractedFish051010_blob/*.blob\"
OUTPUT_DIR=/data/mdesnoye/fish/extractedFish/blob090710/allOpponentSurfDescriptors/
PARAMS="--surf_detector --surf_hessian_threshold=400 --opponent_color_surf
--surf_octaves=3 --surf_octave_layers=4 --surf_extended=false"
SUFFIX=osurf

mkdir -p ${OUTPUT_DIR}

# Script to do the actual extraction
bin/ExtractBatchFeatures.sh ${OUTPUT_DIR} ${INPUT_FILES} ${SUFFIX} ${PARAMS} > ${OUTPUT_DIR}/extraction.log