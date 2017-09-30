#!/bin/sh

EXPERIMENT_DIR=/data/mdesnoye/fish/experiments/extraction081011/20110102/mixing_experiment_geothresh

rm -rf ${EXPERIMENT_DIR}

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
--query_box_size="[2.0, 1.0, 4.0, 0.5, 8.0]" \
--video_regexp="(([0-9][0-9]-){3})" \
--video_ids="['09-42-48-', '10-52-48-', '11-12-48-']" \
--do_geo_rerank \
--geo_rerank_inlier_thresh "[2.0*x + 1.0 for x in range(5)]" \
__log:=${EXPERIMENT_DIR}/rosout.log > ${EXPERIMENT_DIR}/stdout.txt
