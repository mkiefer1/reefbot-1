#!/bin/sh

EXPERIMENT_DIR=/data/mdesnoye/fish/experiments/extraction081011/20110102/mixing_experiment_osurf

#rm -rf ${EXPERIMENT_DIR}

mkdir -p ${EXPERIMENT_DIR}

bin/RunSpeciesLabelingExperiment.py \
--blob_dir /data/mdesnoye/fish/tank_videos/extracted_fish/20110102/blobs \
--experiment_dir ${EXPERIMENT_DIR} \
--image_list /home/mdesnoye/src/fish/ros/species_id/settings/extraction081011/imageLabels.txt \
--use_opponent_surf \
--shape_dict_filename /data/mdesnoye/fish/experiments/extraction081011/20110102/osurf.dict \
--color_dict_filename  /data/mdesnoye/fish/experiments/extraction081011/20110102/hsv.dict \
--shape_weights="[1.0]" \
--min_blob_size="[20]" \
--video_regexp="(([0-9][0-9]-){3})" \
--video_ids="['09-42-48-', '10-52-48-', '11-12-48-']" \
__log:=${EXPERIMENT_DIR}/rosout.log > ${EXPERIMENT_DIR}/stdout.txt
